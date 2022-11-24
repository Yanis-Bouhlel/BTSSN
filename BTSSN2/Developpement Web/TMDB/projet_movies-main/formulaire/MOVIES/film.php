<?php 
session_start();
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <link rel="stylesheet" href="../assets/css/styleMovie.css" />
    <title>The Donuts Movies</title>
    <style>
        div#container {
            position: relative;
            display: flex;
            flex-wrap: wrap;
            margin: 20px;
            justify-content: center;
        }

        div#card2 {
            margin: 10px;
        }

        div#video {
            padding: 20px;
            justify-content: center;
        }

        div#card2 p#description {
            width: 1000px;
            margin-top: -25px;
        }

        div#card p#note {
            margin: -2px;
        }

        div#note {
            display: flex;
        }

        div.etoile {
            flex: 1;
            padding: 1.5em;
        }

        div#card2 h1#title {
            margin-top: -10spx;
        }

        .note {
            display: contents;
        }
    </style>
</head>

<body>
    <header id="nav">
        <form id="form">
            <input type="text" id="search" class="search" placeholder="Search" onkeyup="search_()">
        </form>
        <!-- <div class="proetpara">

            <img class="avatar" src="avatar2.png">
            <div id="menu">
                <ul>
                    <li><a href="Profil.html">Profil</a></li>
                    <li><a href="favoris.html">Vos Favoris</a></li>

                    <li><button class="button" onclick="unlog()">Deconnexion</button></li>
                </ul>
            </div>
            <span class="tooltiptext">Profil et Paramétre</span>
        </div> -->

        <a href="#menu" id="toggle" onclick="toggleClass(this, 'on')"><img class="avatar" src="../assets/image/avatar2.png"></a>

        <div id="menu">
            <ul>
                <li style="color: #888;">
                  <div class="pseudo">
                    <div class="imgPseudo">
                      <img class="avatar2" src="../assets/image/avatar2.png">
                    </div>
                    <div class="pseudo">
                        <p style="color: black;">
                          <?php 
                            echo $_SESSION['pseudo'];
                          ?>
                        </p>
                      </div>
                  </div>
                </li><hr>
                <li><a href="Profil.php" class="texta"><img class="EtoileFavoris" src="../assets/image/compte.png"> Profil</a></li>
                <li><a href="favoris.php" class="texta"><img class="EtoileFavoris" src="../assets/image/favoris2.png"> Vos Favoris</a></li><hr>
                <!-- <li><button class="button" onclick="unlog()">Deconnexion</button></li> -->
                <li><a href="javascript:onclick=unlog()" class="texta"><img class="EtoileFavoris" src="../assets/image/deconnexion.png"> Deconnexion</a></li>
            </ul>
        </div>


    </header>

    <main class="card">
        <div id="container"></div>
    </main>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
    <script src="../assets/js/script2.js"></script>
</body>

</html>