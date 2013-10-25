jQuery(document).ready(function($) {
	$('.round').each(function(){
		var $div = $(this);
		var ratio = $div.data('min')/100;
		var color = "#83b535";
		var $circle = $('<canvas width="150px" height="150px"/>');
		var $color = $('<canvas class="color-round" width="150px" height="150px"/>');
		$div.append($circle);
		$div.append($color);
		var ctx = $circle[0].getContext('2d');

		// On dessine le cercle blanc avec ombre porté
		ctx.beginPath();
		ctx.arc(75,75,40,0,2*Math.PI);
		ctx.lineWidth = 10;
		ctx.strokeStyle = "#f7f7f7"
		ctx.shadowOffsetX = 2;
		ctx.shadowBlur = 5;
		ctx.shadowColor="rgba(0,0,0,0.1)";
		ctx.stroke();

		var steps = $div.data('min') - 0;
        var step = 0;

        var z = setInterval(function(){

            if(step == 99) {
            	var start_angle = 0;
            	var end_angle = 2 * Math.PI;
            } else {
            	var start_angle = -1/2 * Math.PI;
            	var end_angle = (++step/100)*2*Math.PI - 1/2 * Math.PI;
            }

            if(step <= 1) {
			var color = "#EE2626"
			} else if(step > 0 && step<50) {
				var color = "#EE7626"
			} else if(step > 50 && step<99) {
				var color = "#E9D120"
			} else {
				var color = "#83b535";
			}

            var ctx = $color[0].getContext('2d');
            ctx.beginPath();
            ctx.clearRect(0, 0,
                      150, 150);

            ctx.beginPath();
            ctx.arc(75, 75, 40, start_angle, end_angle, false);
            ctx.lineWidth = 10;
            ctx.strokeStyle = color;
            ctx.stroke();
            if(step >= steps){
                window.clearInterval(z);
            }
        }, 8)
	});
});