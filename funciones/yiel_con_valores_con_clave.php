<?php


$texto = <<<'EOF'
"1;Sor Juana;Hombres necios"
"2;Lopez Velarde;La suave patria"
"3;Becquer;Vuelven oscuras golondrinas"
EOF;
function poema($texto){
    foreach(explode("\n", $texto) as $value) {
        $indice = explode(";", $value); // array("1","Becquer","Las golondrinas")
        $id = array_shift($indice);
        yield $id=>$indice;
    }
}

foreach(poema($texto) as $key => $value){
    echo "Llave: ".$key." <br />";
    // foreach ($value as $cita) {
    //     echo $cita." - ";
    // }echo "<br />";

    echo "<pre>";
        print_r($key);
        var_dump($key);
    echo "</pre>";
}

 ?>
