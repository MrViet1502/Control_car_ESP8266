R"(
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Remote Control</title>
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">
</head>
<body>
<div class="container-fluid h-100">
    <div class="row h-100 justify-content-center align-items-center">
        <div class="col-md-4 d-flex flex-column justify-content-around">
            <button id="drive" type="button" class="btn btn-primary btn-block mb-2" onmousedown='makeAjaxCall("forward")' onmouseup='makeAjaxCall("driveStop")' ontouchstart='makeAjaxCall("forward")' ontouchend='makeAjaxCall("driveStop")'>Drive</button>
            <div class="row">
                <div class="col-md-6 mb-2">
                    <button id="left" type="button" class="btn btn-primary btn-block" onmousedown='makeAjaxCall("left")' onmouseup='makeAjaxCall("steerStop")' ontouchstart='makeAjaxCall("left")' ontouchend='makeAjaxCall("steerStop")'>Left</button>
                </div>
                <div class="col-md-6 mb-2">
                    <button id="right" type="button" class="btn btn-primary btn-block" onmousedown='makeAjaxCall("right")' onmouseup='makeAjaxCall("steerStop")' ontouchstart='makeAjaxCall("right")' ontouchend='makeAjaxCall("steerStop")'>Right</button>
                </div>
            </div>
            <button id="back" type="button" class="btn btn-primary btn-block" onmousedown='makeAjaxCall("back")' onmouseup='makeAjaxCall("driveStop")' ontouchstart='makeAjaxCall("back")' ontouchend='makeAjaxCall("driveStop")'>Back</button>
        </div>
    </div>
</div>
<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js"></script>
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>
    <script> function makeAjaxCall(url){$.ajax({"url": url})}</script>
    <!--<script>
       document.addEventListener('keydown', function(event) {
          if(event.keyCode == 37) {
              //Left Arrow
              makeAjaxCall("left");            
          }
          else if(event.keyCode == 39) {
              //Right Arrow
              makeAjaxCall("right");   
          } else if(event.keyCode == 38) {
              //Up Arrow
              makeAjaxCall("forward");   
          } else if(event.keyCode == 40) {
              //Down Arrow
              makeAjaxCall("back");   
          }
      });

      document.addEventListener('keyup', function(event) {
          if(event.keyCode == 37 ||event.keyCode == 39 ) {
              //Left or Right Arrow
              makeAjaxCall("steerStop");            
          }
          else if(event.keyCode == 38 ||event.keyCode == 40 ) {
              //Up or Down Arrow
              makeAjaxCall("driveStop");            
          }
      });
    </script>-->
  </body>
</html>

)"
