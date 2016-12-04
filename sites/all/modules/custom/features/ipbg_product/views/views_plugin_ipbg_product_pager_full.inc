<?php
/**
 * @file
 * Definition of views_plugin_ipbg_product_pager_full.
 */

/**
 * The plugin to handle full pager.
 *
 * @ingroup views_plugin_ipbg_product_pager_full
 */
class views_plugin_ipbg_product_pager_full extends views_plugin_pager_full {
  function summary_title() {
    if (!empty($this->options['offset'])) {
      return format_plural($this->options['items_per_page'], '@count item, skip @skip', 'Paged, @count items, skip @skip', array('@count' => $this->options['items_per_page'], '@skip' => $this->options['offset']));
    }
      return format_plural($this->options['items_per_page'], '@count item, @items_first_page item on first page', 'Paged, @count items, @count item, @items_first_page items on first page', array('@count' => $this->options['items_per_page'], '@items_first_page' => $this->options['items_first_page']));
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['items_first_page'] = array('default' => 10);
    return $options;
  }

  /**
   * Provide the default form for setting options.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $pager_text = $this->display->handler->get_pager_text();

    $form['items_first_page'] = array(
      '#title' => t('Items on first page'),
      '#type' => 'textfield',
      '#description' => t('Items on first page'),
      '#default_value' => $this->options['items_first_page'],
      '#weight' => -99,
    );
  }

  function options_validate(&$form, &$form_state) {
    parent::options_validate($form, $form_state);
  }

  function query() {
    if ($this->items_per_page_exposed()) {
      if (!empty($_GET['items_per_page']) && $_GET['items_per_page'] > 0) {
        $this->options['items_per_page'] = $_GET['items_per_page'];
      }
      elseif (!empty($_GET['items_per_page']) && $_GET['items_per_page'] == 'All' && $this->options['expose']['items_per_page_options_all']) {
        $this->options['items_per_page'] = 0;
      }
    }
    if ($this->offset_exposed()) {
      if (isset($_GET['offset']) && $_GET['offset'] >= 0) {
        $this->options['offset'] = $_GET['offset'];
      }
    }

    $limit = $this->options['items_per_page'];
    $items_first_page = $this->options['items_first_page'];
    if ($this->current_page == 0) {
      $limit = $items_first_page;
    }

    if ($this->current_page != 0) {
      $offset = $this->current_page * $this->options['items_per_page'] + $this->options['offset'] - ($limit - $items_first_page);
    }else {
      $offset = $this->current_page * $this->options['items_first_page'] + $this->options['offset'];
    }
    if (!empty($this->options['total_pages'])) {
      if ($this->current_page >= $this->options['total_pages']) {
        $limit = $this->options['items_per_page'];
        $offset = $this->options['total_pages'] * $this->options['items_per_page'] - $this->options['total_pages'];
      }
    }

    $this->view->query->set_limit($limit);
    $this->view->query->set_offset($offset);
  }
}
