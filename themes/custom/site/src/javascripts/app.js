jQuery(function($) {
    'use strict';

    // Flexy header
    flexy_header.init();

    // Sidr
    $('.slinky-menu')
        .find('ul, li, a')
        .removeClass();

    $('.sidr-toggle--right').sidr({
        name: 'sidr-main',
        side: 'right',
        renaming: false,
        body: '.layout__wrapper',
        source: '.sidr-source-provider'
    });

    // Slinky
    $('.sidr .slinky-menu').slinky({
        title: true,
        label: ''
    });

    // Enable / disable Bootstrap tooltips, based upon touch events
    if(Modernizr.touchevents) {
        $('[data-toggle="tooltip"]').tooltip('hide');
    }
    else {
        $('[data-toggle="tooltip"]').tooltip();
    }

    $('.accordion__heading').on('click', function(event) {
        let $element = $(this),
            $parent = $element.parent('.accordion');

        if ($parent.hasClass('accordion--not-toggleable')) return;

        $parent.toggleClass('open');
    });

      const html = $("html");
      $(document).ready(function () {
        $(".js-increase-font-size").click(function () {
          modifyFontSize("increase");
        });
        $(".js-decrease-font-size").click(function () {
          modifyFontSize("decrease");
        });
    
    
        function modifyFontSize(flag) {
          let currentFontSize = parseInt(html.css("font-size"));
          if (flag == "increase") {
            switch (html.css("font-size")) {
              case "10px":
                currentFontSize = 15;
                break;
              case "15px":
                currentFontSize = 23;
                break;
            }
          } else if (flag == "decrease") {
            switch (html.css("font-size")) {
              case "23px":
                currentFontSize = 15;
                break;
              case "15px":
                currentFontSize = 10;
                break;
            }
          }
          localStorage.setItem("fontSize", currentFontSize);
          html.css("font-size", parseInt(currentFontSize));
        }
        html.css("font-size", parseInt(localStorage.getItem("fontSize")));
      });

});
