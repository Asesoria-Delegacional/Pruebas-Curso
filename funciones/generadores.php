<?php

function rango($inicio, $fin, $incremento = 1){
    for($i = $inicio; $i <= $fin; $i += $incremento){
        yield $i;
    }// fin de FOR
}

foreach (rango(1,90000000, 2) as $value) {
    echo $value." ";
}

 ?>
