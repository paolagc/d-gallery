(function ($) {
  Drupal.behaviors.viewsInfiniteScroll = {
    attach: function (context, settings) {
      $(function(){


        var $container = $('div.autopager');


        $container.imagesLoaded( function(){
          $container.infinitescroll({
            navSelector  : 'div.autopager .pager',    // selector for the paged navigation
            nextSelector : 'div.autopager .pager-next a',  // selector for the NEXT link (to page 2)
            itemSelector : 'div.autopager .views-row',     // selector for all items you'll retrieve
            loading: {
              finishedMsg: 'No more pages to load.'
            }
        });

          $container.masonry({
            columnWidth: 200,
            itemSelector: 'div.item'
          });

          console.log($container);
    })
  });
  }
};


})(jQuery);