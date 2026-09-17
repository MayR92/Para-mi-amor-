<!DOCTYPE html>
<html lang="es">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Para mi amor ❤️</title>

<style>
*{
    box-sizing:border-box;
    -webkit-tap-highlight-color:transparent;
}

html,body{
    margin:0;
    width:100%;
    height:100%;
    overflow:hidden;
}

body{
    background:
        linear-gradient(to bottom,#bfe8ff 0%,#e8f7ff 55%,#f9eee1 56%,#ead1b0 100%);
    font-family:Georgia,serif;
    display:flex;
    justify-content:center;
    align-items:center;
}

.scene{
    width:100%;
    height:100vh;
    max-width:600px;
    position:relative;
    overflow:hidden;
}

/* LUNA / LUZ */

.glow{
    position:absolute;
    width:230px;
    height:230px;
    border-radius:50%;
    background:rgba(255,255,255,.35);
    filter:blur(35px);
    top:35px;
    right:-70px;
}

/* ESTRELLAS */

.star{
    position:absolute;
    color:white;
    font-size:12px;
    opacity:.8;
    animation:twinkle 2s infinite alternate;
}

.s1{top:10%;left:12%}
.s2{top:18%;left:72%;animation-delay:.5s}
.s3{top:27%;left:25%;animation-delay:1s}
.s4{top:12%;left:48%;animation-delay:1.5s}
.s5{top:32%;left:85%;animation-delay:.8s}

@keyframes twinkle{
    from{opacity:.2;transform:scale(.7)}
    to{opacity:1;transform:scale(1.2)}
}

/* MENSAJE SUPERIOR */

.title{
    position:absolute;
    top:35px;
    left:20px;
    right:20px;
    text-align:center;
    color:#743b4b;
    z-index:20;
}

.title h1{
    margin:0;
    font-size:27px;
}

.title p{
    margin:8px 0;
    font-size:15px;
}

/* TIERRA */

.ground{
    position:absolute;
    bottom:-70px;
    left:-10%;
    width:120%;
    height:230px;
    background:#8d5a3b;
    border-radius:50% 50% 0 0;
    box-shadow:inset 0 15px 25px rgba(60,30,15,.25);
}

.ground:before{
    content:"";
    position:absolute;
    top:15px;
    left:10%;
    width:80%;
    height:25px;
    background:#a66c45;
    border-radius:50%;
}

/* MACETA */

.pot{
    position:absolute;
    bottom:55px;
    left:50%;
    transform:translateX(-50%);
    width:150px;
    height:105px;
    background:linear-gradient(to right,#d98255,#f1a477,#d98255);
    clip-path:polygon(8% 0,92% 0,78% 100%,22% 100%);
    z-index:5;
}

.pot:before{
    content:"";
    position:absolute;
    top:0;
    left:-8px;
    width:166px;
    height:22px;
    border-radius:50%;
    background:#8c4f36;
}

/* TALLO */

.plant{
    position:absolute;
    bottom:125px;
    left:50%;
    width:230px;
    height:430px;
    transform:translateX(-50%);
    z-index:6;
}

.stem{
    position:absolute;
    bottom:0;
    left:50%;
    width:9px;
    height:0;
    background:linear-gradient(to right,#277a3b,#55ad55);
    border-radius:10px;
    transform:translateX(-50%);
    transition:height 4s cubic-bezier(.2,.8,.2,1);
}

/* RAMAS */

.branch{
    position:absolute;
    height:6px;
    background:#328b42;
    border-radius:10px;
    transform-origin:left center;
    opacity:0;
    transition:opacity 1s;
}

.b1{
    width:85px;
    left:50%;
    bottom:145px;
    transform:rotate(-35deg);
}

.b2{
    width:85px;
    left:50%;
    bottom:210px;
    transform:rotate(35deg);
}

.b3{
    width:95px;
    left:50%;
    bottom:275px;
    transform:rotate(-28deg);
}

.b4{
    width:95px;
    left:50%;
    bottom:330px;
    transform:rotate(28deg);
}

/* HOJAS */

.leaf{
    position:absolute;
    width:50px;
    height:27px;
    background:linear-gradient(135deg,#3ca34b,#75c957);
    border-radius:100% 0 100% 0;
    opacity:0;
    transform:scale(0) rotate(0deg);
    transition:all 1s cubic-bezier(.2,1.5,.5,1);
}

.l1{left:57px;bottom:155px;transform:rotate(-30deg) scale(0)}
.l2{right:55px;bottom:220px;transform:rotate(30deg) scale(0)}
.l3{left:47px;bottom:285px;transform:rotate(-35deg) scale(0)}
.l4{right:48px;bottom:340px;transform:rotate(35deg) scale(0)}

.leaf.show{
    opacity:1;
    transform:scale(1) rotate(-30deg);
}

/* FLORES */

.flower{
    position:absolute;
    width:75px;
    height:75px;
    opacity:0;
    transform:scale(0);
    transition:all 1.5s cubic-bezier(.2,1.5,.5,1);
}

.flower.show{
    opacity:1;
    transform:scale(1);
}

.f1{left:3px;bottom:292px}
.f2{right:0;bottom:350px}
.f3{left:78px;bottom:405px}
.f4{right:7px;bottom:255px}

.petal{
    position:absolute;
    width:35px;
    height:45px;
    background:#ff6f91;
    border-radius:50% 50% 45% 45%;
    left:20px;
    top:15px;
    transform-origin:50% 100%;
    box-shadow:0 0 8px rgba(255,80,120,.25);
}

.petal:nth-child(1){transform:rotate(0deg) translateY(-14px)}
.petal:nth-child(2){transform:rotate(72deg) translateY(-14px)}
.petal:nth-child(3){transform:rotate(144deg) translateY(-14px)}
.petal:nth-child(4){transform:rotate(216deg) translateY(-14px)}
.petal:nth-child(5){transform:rotate(288deg) translateY(-14px)}

.center{
    position:absolute;
    width:25px;
    height:25px;
    border-radius:50%;
    background:#ffd45c;
    left:25px;
    top:25px;
    z-index:5;
}

/* AGUA */

.water{
    position:absolute;
    bottom:115px;
    left:50%;
    transform:translateX(-50%);
    z-index:30;
    cursor:pointer;
    text-align:center;
    user-select:none;
    transition:all .5s;
}

.water-can{
    font-size:65px;
    filter:drop-shadow(0 5px 5px rgba(0,0,0,.15));
    animation:bounce 1.5s infinite;
}

.water-text{
    background:rgba(255,255,255,.85);
    padding:8px 14px;
    border-radius:20px;
    color:#537184;
    font-size:14px;
    margin-top:3px;
}

@keyframes bounce{
    0%,100%{transform:rotate(-5deg) translateY(0)}
    50%{transform:rotate(5deg) translateY(-7px)}
}

/* GOTAS */

.drop{
    position:absolute;
    width:8px;
    height:15px;
    background:#4bb9ef;
    border-radius:50% 50% 50% 0;
    transform:rotate(-45deg);
    z-index:25;
    animation:fall .8s linear forwards;
}

@keyframes fall{
    0%{
        opacity:1;
        transform:translateY(0) rotate(-45deg);
    }
    100%{
        opacity:0;
        transform:translateY(130px) rotate(-45deg);
    }
}

/* FINAL */

.final{
    position:absolute;
    z-index:50;
    left:50%;
    top:42%;
    width:90%;
    transform:translate(-50%,-50%) scale(.7);
    text-align:center;
    opacity:0;
    pointer-events:none;
    transition:all 2s ease;
}

.final.show{
    opacity:1;
    transform:translate(-50%,-50%) scale(1);
}

.final h2{
    color:#c4476d;
    font-size:30px;
    margin:0 0 15px;
    text-shadow:0 2px 8px rgba(255,255,255,.8);
}

.final p{
    color:#713d4c;
    font-size:19px;
    line-height:1.5;
    background:rgba(255,255,255,.75);
    padding:18px;
    border-radius:20px;
    box-shadow:0 8px 25px rgba(0,0,0,.1);
}

/* CORAZONES */

.heart{
    position:absolute;
    bottom:-30px;
    font-size:20px;
    animation:float 5s linear forwards;
    z-index:40;
}

@keyframes float{
    0%{transform:translateY(0) scale(.5);opacity:0}
    20%{opacity:1}
    100%{transform:translateY(-100vh) scale(1.3) rotate(20deg);opacity:0}
}

/* BOTON REINICIAR */

.restart{
    position:absolute;
    bottom:18px;
    right:18px;
    z-index:60;
    border:0;
    background:rgba(255,255,255,.75);
    color:#9a4a61;
    padding:9px 13px;
    border-radius:20px;
    display:none;
}
</style>
</head>

<body>

<div class="scene">

    <div class="glow"></div>

    <div class="star s1">✦</div>
    <div class="star s2">✦</div>
    <div class="star s3">✧</div>
    <div class="star s4">✦</div>
    <div class="star s5">✧</div>

    <div class="title">
        <h1>🌸 Para el amor de mi vida 🌸</h1>
        <p>Riega nuestro amor y mira cómo florece ❤️</p>
    </div>

    <div class="ground"></div>

    <div class="plant">

        <div class="stem" id="stem"></div>

        <div class="branch b1"></div>
        <div class="branch b2"></div>
        <div class="branch b3"></div>
        <div class="branch b4"></div>

        <div class="leaf l1"></div>
        <div class="leaf l2"></div>
        <div class="leaf l3"></div>
        <div class="leaf l4"></div>

        <div class="flower f1">
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="center"></div>
        </div>

        <div class="flower f2">
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="center"></div>
        </div>

        <div class="flower f3">
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="center"></div>
        </div>

        <div class="flower f4">
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="petal"></div>
            <div class="center"></div>
        </div>

    </div>

    <div class="pot"></div>

    <div class="water" id="water">
        <div class="water-can">💧</div>
        <div class="water-text">Tócame para regar 🌱</div>
    </div>

    <div class="final" id="final">
        <h2>🌹 Para ti, mi amor 🌹</h2>
        <p>
            Así como estas flores necesitan agua para crecer,
            nuestro amor necesita pequeños detalles para seguir
            floreciendo cada día. ❤️
            <br><br>
            Te amo muchísimo.
        </p>
    </div>

    <button class="restart" id="restart">↻ Volver a regar</button>

</div>

<script>

const water = document.getElementById("water");
const stem = document.getElementById("stem");
const branches = document.querySelectorAll(".branch");
const leaves = document.querySelectorAll(".leaf");
const flowers = document.querySelectorAll(".flower");
const final = document.getElementById("final");
const restart = document.getElementById("restart");

let level = 0;

water.addEventListener("click", function(){

    if(level >= 5) return;

    level++;

    createDrops();

    if(level === 1){
        stem.style.height = "120px";
    }

    if(level === 2){
        stem.style.height = "190px";
        branches[0].style.opacity = "1";
        branches[1].style.opacity = "1";
        leaves[0].classList.add("show");
        leaves[1].classList.add("show");
    }

    if(level === 3){
        stem.style.height = "260px";
        branches[2].style.opacity = "1";
        leaves[2].classList.add("show");
        flowers[0].classList.add("show");
    }

    if(level === 4){
        stem.style.height = "330px";
        branches[3].style.opacity = "1";
        leaves[3].classList.add("show");
        flowers[1].classList.add("show");
        flowers[2].classList.add("show");
    }

    if(level === 5){

        stem.style.height = "390px";

        flowers[3].classList.add("show");

        setTimeout(()=>{
            water.style.opacity="0";
            water.style.pointerEvents="none";

            final.classList.add("show");

            createHearts();

            restart.style.display="block";
        },1200);
    }
});


function createDrops(){

    for(let i=0;i<8;i++){

        const drop=document.createElement("div");

        drop.className="drop";

        const waterRect=water.getBoundingClientRect();
        const sceneRect=document.querySelector(".scene").getBoundingClientRect();

        drop.style.left =
            (waterRect.left-sceneRect.left+25+Math.random()*40)+"px";

        drop.style.top =
            (waterRect.top-sceneRect.top+55)+"px";

        document.querySelector(".scene").appendChild(drop);

        setTimeout(()=>{
            drop.remove();
        },800);
    }
}


function createHearts(){

    for(let i=0;i<18;i++){

        setTimeout(()=>{

            const heart=document.createElement("div");

            heart.className="heart";
            heart.innerHTML="❤️";

            heart.style.left=Math.random()*95+"%";
            heart.style.animationDuration=(3+Math.random()*3)+"s";

            document.querySelector(".scene").appendChild(heart);

            setTimeout(()=>{
                heart.remove();
            },6000);

        },i*250);
    }
}


restart.addEventListener("click",function(){

    level=0;

    stem.style.height="0";

    branches.forEach(b=>{
        b.style.opacity="0";
    });

    leaves.forEach(l=>{
        l.classList.remove("show");
    });

    flowers.forEach(f=>{
        f.classList.remove("show");
    });

    final.classList.remove("show");

    water.style.opacity="1";
    water.style.pointerEvents="auto";

    restart.style.display="none";
});

</script>

</body>
</html>
