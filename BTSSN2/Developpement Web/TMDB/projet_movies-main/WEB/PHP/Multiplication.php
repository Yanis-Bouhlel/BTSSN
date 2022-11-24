<?php

    function multiplication()
    {
        for ($i = 1; $i <= 5; $i++) {
            for ($j = 1; $j <= 5; $j++) {
                echo str_pad($i * $j, 4, " ");
            }
            echo "<br>";
        }
    }
?>
