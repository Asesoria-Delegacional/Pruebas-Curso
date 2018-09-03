<?php


$bolsa = array(1,"uva",3,3.14159216,5,true);
$palabras = array("Juan", "Manuel", "Paola", "Casas");

echo "Recordando arreglos";
echo "<br>";
echo "<br>Lista de elemento en la bolsa";
echo "<ol>";

foreach($bolsa as $elemento){
	echo "<li>".var_dump($elemento)."</li>";
}

echo "</ol>";

echo "<br>Concatenacion de palabras:";
for($i = 0; $i < count($palabras); $i++){
	echo "<li>".$palabras[$i]." ".$palabras[++$i]."<br>"; 
}


?>