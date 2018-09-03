

<?php

$meses = array("lunes", "martes", "miercoles", "jueves", "viernes", "sabado", "domingo");
// imprimimos el valor de las posiciones en que se encuentra el cursor
echo "<br />".current($meses);
echo "<br />".next($meses);
echo "<br />".next($meses);
echo "<br />".end($meses);
echo "<br />".prev($meses);
echo "<br />".reset($meses);

 ?>
