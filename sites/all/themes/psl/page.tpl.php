<?php
global $base_path;
?>
<div id="outdiv">
    <div id="header">&nbsp;</div>
    <div id="container">
        <div id="banner"></div>
        <div id="menu">
            <?php print render($page['navigation']); ?>
        </div>
        <!--div id="submenu">

                <ul><li class="selectedleft"><a href="#">From the Editor's Desk</a></li></ul>

        </div-->
        <div id="content">
            <h1><?php echo $title;?></h1>
            <?php print render($page['content']); ?>
        </div>
    </div>
    <div id="footer">
        <p>Copyright &copy; <?php echo date('Y');?> Persistent Systems Ltd.</p>
    </div>
</div>