(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
    Drupal.behaviors.iphonebacgiang = {
        attach: function(context, settings) {
            $("#anchor-links-product").affix({
                offset: {
                    top: (928 + 169)
                }
            });
            $('body').scrollspy({ target: '#anchor-links-product .pane-content' });
            $(".show-slide").click(function(e){
                e.preventDefault();
                $(".wrap-owlcarousel").modal();
            });
        }
    };


})(jQuery, Drupal, this, this.document);
