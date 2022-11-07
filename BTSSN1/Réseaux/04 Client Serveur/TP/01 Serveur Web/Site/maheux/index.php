<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
        <title>Site de Maheux</title>
        <link rel="stylesheet" type="text/css" media=screen href="snir.css">
</head>
<body>
<h1>Page du site Maheux</h1>
<table>
<tr><th>Cours</th><th>Contenu</th></tr>
<?php
error_reporting(E_ALL);

    // Connexion au SGBD puis à la base de données
    $db = mysqli_connect('localhost', 'root', 'snirsnir','snir');
    if (!$db) {
        die('Impossible de se connecter : ' . mysql_error());
    }
    // Recherche dans la base de l'utilisateur
    $strSQL = "SELECT * FROM `maheux`;";
    $resultat = mysqli_query($db, $strSQL);

    while ($ligne_resultat = mysqli_fetch_array($resultat))
    {
	echo "<tr><td>".$ligne_resultat['cours']."</td><td>".$ligne_resultat['texte']."</td></tr>";
    }
?>
</table>
</body>
</html>