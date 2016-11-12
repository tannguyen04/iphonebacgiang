<div class="site-wide">
  <div id="header-top">
    <div class="container">
      <?php if(!empty($content['header_top'])): ?>
        <?php print $content['header_top']; ?>
      <?php endif; ?>
    </div>
  </div>


  <div id="header">
      <?php if(!empty($content['navigation'])): ?>
        <div id="navigation">
          <div class="container">
            <div class="row">
              <?php print $content['navigation']; ?>
            </div>
          </div>
        </div>
      <?php endif; ?>

      <?php //if(!empty($content['navigation_bottom'])): ?>
        <div id="navigation-bottom">
          <div class="container">
            <?php print $content['navigation_bottom']; ?>
          </div>
        </div>
      <?php //endif; ?>
  </div>

  <div id="page-title">
    <?php if(!empty($content['page_title'])): ?>
      <div class="container">
        <?php print $content['page_title']; ?>
      </div>
    <?php endif; ?>
  </div>

  <div id="main-content">
    <div class="container">
      <?php if(!empty($content['content_top'])): ?>
        <div id="content-top">
          <?php print $content['content_top']; ?>
        </div>
      <?php endif; ?>

      <?php if(!empty($content['content'])): ?>
        <div id="content">
          <?php print $content['content']; ?>
        </div>
      <?php endif; ?>
      <?php if(!empty($content['content_bottom'])): ?>
        <div id="content-bottom">
          <?php print $content['content_bottom']; ?>
        </div>
      <?php endif; ?>
    </div>
  </div>

  <div id="footer">
    <div class="footer-panel">
      <div class="container">
        <div class="row">
          <div id="footer-panel-1" class="col-md-5">
            <?php print $content['footer_panel_1']; ?>
          </div>
          <div id="footer-panel-2" class="col-md-2">
            <?php print $content['footer_panel_2']; ?>
          </div>
          <div id="footer-panel-3" class="col-md-2">
            <?php print $content['footer_panel_3']; ?>
          </div>
          <div id="footer-panel-4" class="col-md-3">
            <?php print $content['footer_panel_4']; ?>
          </div>
        </div>
      </div>
    </div>

    <?php if(!empty($content['footer_top'])): ?>
      <div id="footer-top" class="container">
        <?php print $content['footer_top']; ?>
      </div>
    <?php endif; ?>
    <div class="footer">
      <div class="container">
        <?php print $content['footer']; ?>
      </div>
    </div>
    </div>
  </div>

</div>
