<?php
$z[0]=Array("field","",252,271);
$z[0][4]['name']="title";
$z[1]=Array("global","",272,298);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",339,368);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",408,466);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",517,549);
$z[4][4]['name']="cfg_templets_skin";
$z[5]=Array("global","",610,642);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("global","",670,702);
$z[6][4]['name']="cfg_templets_skin";
$z[7]=Array("global","",745,777);
$z[7][4]['name']="cfg_templets_skin";
$z[8]=Array("global","",812,844);
$z[8][4]['name']="cfg_templets_skin";
$z[9]=Array("global","",894,926);
$z[9][4]['name']="cfg_templets_skin";
$z[10]=Array("global","",1054,1086);
$z[10][4]['name']="cfg_templets_skin";
$z[11]=Array("include","",1608,1643);
$z[11][4]['filename']="head.htm";
$z[12]=Array("field","",1789,1848);
$z[12][4]['name']="typeid";
$z[12][4]['function']="GetTopTypename(@me)";
$z[13]=Array("channel","\r\n          <li class=\"dqlia\"><a href=\"[field:typeurl/]\">[field:typename/]</a> </li>\r\n           ",1891,2118);
$z[13][4]['type']="son";
$z[13][4]['currentstyle']="<li><a href='~typelink~' class='dqlia'>~typename~</a></li>";
$z[14]=Array("arclist","\r\n        <p><a href=\"[field:arcurl/]\">[field:title/]</a></p>\r\n        <span>[field:pubdate function=\"MyDate('y/m/d',@me)\"/]</span> \r\n        ",2183,2371);
$z[14][4]['row']="1";
$z[14][4]['typeid']="8";
$z[15]=Array("global","",2463,2495);
$z[15][4]['name']="cfg_templets_skin";
$z[16]=Array("field","",2594,2623);
$z[16][4]['name']="position";
$z[17]=Array("field","",2674,2703);
$z[17][4]['name']="typename";
$z[18]=Array("list","\r\n            <li><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:array runphp='yes']@me = (empty(@me['litpic']) ? \"\" : \"<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}'/></a>\"); [/field:array]</a>\r\n              <p><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></p>\r\n            </li>\r\n             ",2842,3228);
$z[18][4]['pagesize']="12";
$z[19]=Array("pagelist","",3335,3392);
$z[19][4]['listitem']="info,index,end,pre,next,pageno";
$z[20]=Array("include","",3484,3522);
$z[20][4]['filename']="footer1.htm";

?>