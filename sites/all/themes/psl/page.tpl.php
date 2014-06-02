<link type="text/css" href="sites/all/themes/psl/css/blue.css" rel="stylesheet" />
<div id="outdiv">
    <div id="header">&nbsp;</div>
    <div id="container">
        <div id="banner"><img src="sites/all/themes/psl/images/banner.jpg" alt="banner" /></div>
        <div id="menu">
            <ul>
                <li class="selected">Home</li>
                <li class="menuitemn"><a href="technobyte.php">Techno Byte</a></li>
            </ul>
        </div>
        <div id="submenu">
            <ul><li class="selectedleft"><a href="#">From the Editor's Desk</a></li></ul>
        </div>
        <div id="content">
            <?php print render($page['content']); ?>
            <img src="sites/all/themes/psl/images/ffn_logo.gif" width="162" height="72"  align="right"/>
            <br>
            Cheers!
            <br><strong>Nadia Fernandes</strong>
            <br>Editor - Fish-4-News
            <br>Persistent Systems Ltd.
            <br>Goa.
        </div>
    </div>
    <div id="footer">
        <p>Copyright &copy; 2013 Persistent Systems Ltd.
        </p>
    </div>
</div>