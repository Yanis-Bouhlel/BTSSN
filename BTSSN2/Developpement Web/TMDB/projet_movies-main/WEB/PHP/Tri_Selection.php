<?php
    function tri_selection($t){
        $n = sizeof($t);
        for ($i = 0; $i <$n;$i++){
            $min=$i;
            for ($j = $i+1; $j<$n; $j++){
                if ($t[$j]<$t[$min]){
                    $min = $j;
                }
            }
            if ($min != $i){
                $x=$t[$i];
                $t[$i]=$t[$min];
                $t[$min]=$x;
            }
        }
        return $t;
    }
?>
