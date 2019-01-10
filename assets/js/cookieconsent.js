(($, Drupal) => {
  Drupal.behaviors.cookieconsent = {
    attach: function (context, settings) {
      const cookieconsent = settings.cookieconsent;
      window.cookieconsent.initialise(cookieconsent);
    }
  };
})(jQuery, Drupal);

