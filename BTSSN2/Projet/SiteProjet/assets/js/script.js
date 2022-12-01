const main = document.getElementById("main")

const reportBtn = document.getElementById("Report")

const ledBtnOn = document.getElementById("LedOn")
const ledBtnOff = document.getElementById("LedOff")

const chaufBtnOn = document.getElementById("ChaufOn")
const chaufBtnOff = document.getElementById("ChaufOff")

const tempBtnPlus = document.getElementById("Templus")
const tempBtnMoins = document.getElementById("TempMoins")
const TempValue = document.getElementById("ValTemp")

const voletBtnHigh = document.getElementById("VoletHigh")
const voletBtnLow = document.getElementById("VoletLow")

const alarmBtnOn = document.getElementById("AlarmOn")
const alarmBtnOff = document.getElementById("AlarmOff")

const doorBtnOn = document.getElementById("PorteOpen")
const doorBtnOff = document.getElementById("porteClose")

const cameraBtnShow = document.getElementById("ShowCam")

const gateBtnLeft = document.getElementById("OpenPortail")
const gateBtnRight = document.getElementById("ClosePortail")

function ChangeWindow()
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        data : {data : reportBtn.value},
        success : function (){

        }
    })
}

function Report()
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        data : {data : reportBtn.value},
        success : function (){

        }
    })
}
function LedOn()
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        success : function (){

        }
    })
}
function LedOff()
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        success : function (){

        }
    })
}
function ChauffageOn()
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        success : function (){

        }
    })
}
function ChauffageOff()
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        success : function (){

        }
    })
}
function Temperature(value)
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        data : {data : value},
        success : function (){

        }
    })
}
function VoletOn()
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        success : function (){

        }
    })
}
function VoletOff()
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        success : function (){

        }
    })
}
function AlarmOn()
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        success : function (){

        }
    })
}
function AlarmOff()
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        success : function (){

        }
    })
}
function DoorOn()
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        success : function (){

        }
    })
}
function DoorOff()
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        success : function (){

        }
    })
}
function Camera()
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        success : function (){

        }
    })
}
function PortailOn()
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        success : function (){

        }
    })
}
function PortailOff()
{
    $.ajax({
        url : "./assets/php/main.php",
        method : "POST",
        success : function (){

        }
    })
}