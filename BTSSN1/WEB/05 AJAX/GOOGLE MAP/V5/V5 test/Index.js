
// This example displays a marker at the center of Australia.
// When the user clicks the marker, an info window opens.
function initMap() {
  // GPS lycee
  const lycee = { lat: 48.95930033308523, lng: 2.5477890651742516 };
  const center = { lat: 48.9634844557676, lng: 2.5458580650549236 }
  var pt = { lat: 48.96784590158078, lng: 2.5544264366160823 };
  var pts = { lat: 48.964069230950805, lng: 2.534939918369664 }
  const map = new google.maps.Map(document.getElementById("map"), {
    zoom: 15,
    center: center,
  });
  const contentString =
    '<div id="content">' +
    '<div id="siteNotice">' +
    "</div>" +
    '<h1 id="firstHeading" class="firstHeading">Lycée Jean Rostand</h1>' +
    '<div id="bodyContent">' +
    "<p><b>Jean Rostand</b>, est le lycée qui acceuille la meilleure section <b>BTS SNIR</b> d'ile de france! " +
    "<br/> les statistiques y sont impréssionnantes... " +
    "here We are coding fun :'!'.</p>" +
    "<a href=https://lycee-jeanrostand.fr/>https://lycee-jeanrostand.fr</a> " +
    "</div>" +
    + "<br/>" +
    '<img src="https://static.nationalgeographic.fr/files/styles/image_3200/public/re%CC%81sume%CC%81_siliconvalley.webp?w=1600&h=1014" width=500em heigth=500em>' +
    "</div>";
  const contentString0 =
    '<div id="content">' +
    '<div id="siteNotice">' +
    "</div>" +
    '<h1 id="firstHeading" class="firstHeading">Lycée Jean Rostand</h1>' +
    '<div id="bodyContent">' +
    "<p><b>Jean Rostand</b>, est le lycée qui acceuille la meilleure section <b>BTS SNIR</b> d'ile de france! " +
    "<br/> les statistiques y sont impréssionnantes... " +
    "here We are coding fun :'!'.</p>" +
    "<a href=https://lycee-jeanrostand.fr/>https://lycee-jeanrostand.fr</a> " +
    "</div>" +
    + "<br/>" +
    '<img src="https://static.nationalgeographic.fr/files/styles/image_3200/public/re%CC%81sume%CC%81_siliconvalley.webp?w=1600&h=1014" width=500em heigth=500em>' +
    "</div>";
  const contentString1 =
    '<div id="content">' +
    '<div id="siteNotice">' +
    "</div>" +
    '<h1 id="firstHeading" class="firstHeading">Lycée Jean Rostand</h1>' +
    '<div id="bodyContent">' +
    "<p><b>Jean Rostand</b>, est le lycée qui acceuille la meilleure section <b>BTS SNIR</b> d'ile de france! " +
    "<br/> les statistiques y sont impréssionnantes... " +
    "here We are coding fun :'!'.</p>" +
    "<a href=https://lycee-jeanrostand.fr/>https://lycee-jeanrostand.fr</a> " +
    "</div>" +
    + "<br/>" +
    '<img src="https://static.nationalgeographic.fr/files/styles/image_3200/public/re%CC%81sume%CC%81_siliconvalley.webp?w=1600&h=1014" width=500em heigth=500em>' +
    "</div>";

  const infowindow = new google.maps.InfoWindow({
    content: contentString,
  });
  const marker = new google.maps.Marker({
    position: lycee,
    map,
    title: "Lycée Jean Rostand",
  });
  marker.addListener("click", () => {
    infowindow.open(map, marker);
  });


  const infowindow0 = new google.maps.InfoWindow({
    content: contentString0,
  });
  const marker0 = new google.maps.Marker({
    position: pt,
    map,
    title: "Lycée Jean Rostand",
  });
  marker0.addListener("click", () => {
    infowindow0.open(map, marker0);
  });


  const infowindow1 = new google.maps.InfoWindow({
    content: contentString1,
  });
  const marker1 = new google.maps.Marker({
    position: pts,
    map,
    title: "Lycée Jean Rostand",
  });
  marker1.addListener("click", () => {
    infowindow.open(map, marker1);
  });
}



























/*function initMap() {
  // GPS lycee
  const lycee = { lat: 48.95930033308523, lng: 2.5477890651742516 };
  var points = { lat: 48.96106840419085, lng: 2.5364310599576347 };
  var pts2 = { lat: 48.96492265763093, lng: 2.559949011808787 }
  const map = new google.maps.Map(document.getElementById("map"), {
    zoom: 15,
    center: lycee,
  });
  var flightPlanCoordinatesGlobal = [{ lat: 48.960135160389015, lng: 2.548210237418417 },
  { lat: 48.96139172888674, lng: 2.5530585842092237 },
  { lat: 48.963318405762955, lng: 2.550838551731328 },
  { lat: 48.96072156296099, lng: 2.5430811968660367 },
  { lat: 48.959062863570324, lng: 2.544306042371083 },
  { lat: 48.95938120409442, lng: 2.5477254027393363 }];

  var contentStringGlobal = [
    {
      key:
        '<div id="content">' +
        '<div id="siteNotice">' +
        "</div>" +
        '<h1 id="firstHeading" class="firstHeading">Lycée Jean Rostand</h1>' +
        '<div id="bodyContent">' +
        "<p><b>Jean Rostand</b>, est le lycée qui acceuille la meilleure section <b>BTS SNIR</b> d'ile de france! " +
        "<br/> les statistiques y sont impréssionnantes... " +
        "here We are coding fun :'!'.</p>" +
        "<a href=https://lycee-jeanrostand.fr/>https://lycee-jeanrostand.fr</a> " +
        "</div>" +
        + "<br/>" +
        '<img src="https://static.nationalgeographic.fr/files/styles/image_3200/public/re%CC%81sume%CC%81_siliconvalley.webp?w=1600&h=1014" width=500em heigth=500em>' +
        "</div>"
    },
    {
      key: '<div id="content">' +
        '<div id="siteNotice">' +
        "</div>" +
        '<h1 id="firstHeading" class="firstHeading">Lycée Jean Rostand</h1>' +
        '<div id="bodyContent">' +
        "<p><b>Jean Rostand</b>, est le lycée qui acceuille la meilleure section <b>BTS SNIR</b> d'ile de france! " +
        "<br/> les statistiques y sont impréssionnantes... " +
        "here We are coding fun :'!'.</p>" +
        "<a href=https://lycee-jeanrostand.fr/>https://lycee-jeanrostand.fr</a> " +
        "</div>" +
        + "<br/>" +
        '<img src="https://static.nationalgeographic.fr/files/styles/image_3200/public/re%CC%81sume%CC%81_siliconvalley.webp?w=1600&h=1014" width=500em heigth=500em>' +
        "</div>"
    },
    {
      key:
        '<div id="content">' +
        '<div id="siteNotice">' +
        "</div>" +
        '<h1 id="firstHeading" class="firstHeading">Lycée Jean Rostand</h1>' +
        '<div id="bodyContent">' +
        "<p><b>Jean Rostand</b>, est le lycée qui acceuille la meilleure section <b>BTS SNIR</b> d'ile de france! " +
        "<br/> les statistiques y sont impréssionnantes... " +
        "here We are coding fun :'!'.</p>" +
        "<a href=https://lycee-jeanrostand.fr/>https://lycee-jeanrostand.fr</a> " +
        "</div>" +
        + "<br/>" +
        '<img src="https://static.nationalgeographic.fr/files/styles/image_3200/public/re%CC%81sume%CC%81_siliconvalley.webp?w=1600&h=1014" width=500em heigth=500em>' +
        "</div>"
    }
  ];

  text();




}

function text() {  console.log("oui");
  for (let i = 0; i < flightPlanCoordinatesGlobal; i++) {

    const infowindow = new google.maps.InfoWindow({
      content: contentStringGlobal[i],
    });
    const marker = new google.maps.Marker({
      position: flightPlanCoordinatesGlobal[i],
      map,
      title: "Lycée Jean Rostand",
    })
    marker.addListener("click", () => {
      infowindow.open(map, marker);
    });
    ;
  }
}*/