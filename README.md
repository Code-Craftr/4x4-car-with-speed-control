<h1>This contains code for 4x4 car</h1>
<hr/>
<h3>Components I used</h3>
<ul>
<li>2x L298N Motor Driver</li>
<li>1x arduino R4 Wifi</li>
<li>4x Bo motor</li>
<li>Jumper Cables</li>
<li>Plate to mount all these things</li>
<li>Battery</li>
</ul>
<br/>

<h3>How to Wire all the components together</h3>
<p>To wire all the components together, 
first mount all the components to the plate than connect the bo motors to the L298N motor driver also remvoe the connection pin from the L298N driver and connect jumper wires to that pin and connect that pin to pin in arduino which supports the PMW function as they are used for speed controls, rest 4 wires that comming out of the L298N driver can be connected to pins do this for all 4 motors
<br/>
I have used a 12v battery in my project for the power
Now connect a wire to 12v power input port of both the l298N drivers and connect it to the battery
now connect the ground and also connect a wire from the battery to the 12v power input jack in arduino to power the arduino
<br/>

now all you physical connection are done now upload the code into arduino make sure to change the blynk credentials and wifi username and pass into the code and than create the v0 in blynk app and you are ready to go...
</p>
