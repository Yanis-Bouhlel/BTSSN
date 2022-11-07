function initialiser() {
    // Objet representant une coordonnée
    var latlng = new google.maps.LatLng(46.779231, 6.659431);
    /*
        Objet contenant des propriétés avec des identificateurs 
        prédéfinis dans Google Maps permettant de définir des 
        options d'affichage de notre carte
    */
    var options = {
        center: latlng,
        zoom: 15,
        mapTypeId: google.maps.MapTypeId.ROADMAP
    };
    
    /*
        Constructeur de la carte qui prend en paramêtre le conteneur HTML
        dans lequel la carte doit s'afficher et les options
    */
    var carte = new google.maps.Map(document.getElementById("carte"), options);
}

// On lance l'initialisation de notre carte
initialiser();