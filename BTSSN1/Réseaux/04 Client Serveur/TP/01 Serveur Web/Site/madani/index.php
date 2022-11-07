<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
        <title>Site de Madani</title>
        <link rel="stylesheet" type="text/css" media=screen href="snir.css">
</head>
<body>
<h1>Page du site Madani</h1>
<table>
<tr><th>Cours</th><th>Contenu</th></tr>
<?php

error_reporting(E_ALL);

    // Connexion au SGBD puis à la base de données
    $db = new mysqli('localhost', 'root', 'root','snir'); 
	
    if (!$db) {
		 
        die('Impossible de se connecter : ' . mysql_error());
    }
    // Recherche dans la base de l'utilisateur
    $strSQL = "SELECT * FROM `madani`;";
    $resultat = $db->query($db, $strSQL);

    while ($ligne_resultat = fetch_array($resultat))
    {
	echo "<tr><td>".$ligne_resultat['cours']."</td><td>".$ligne_resultat['texte']."</td></tr>";
    }
?>
</table>
</body>
</html>