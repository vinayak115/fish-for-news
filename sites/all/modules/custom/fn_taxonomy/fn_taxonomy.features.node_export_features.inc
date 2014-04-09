<?php
/**
 * @file
 * fn_taxonomy.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function fn_taxonomy_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'Summer Edition\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8db1072a-556c-6354-dd6b-83a525a44fac\',
      \'nid\' => \'11\',
      \'type\' => \'edition\',
      \'language\' => \'und\',
      \'created\' => \'1397035040\',
      \'changed\' => \'1397035040\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'446da68f-11c3-64d4-55ca-e61f14af971f\',
      \'revision_timestamp\' => \'1397035040\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Dear Readers,\\r\\n\\r\\nIt\'s time once again for Goa\'s quarterly newsletter!!! Fish-4-News is proud to present its 24th edition of our newsletter.\\r\\n\\r\\nHere\'s a peek of what each section has in store for you:\\r\\n\\r\\nTechno Byte is all about technologies that you wanted to learn about, Shaunak Shilimkhan explains us more on cellular technology while Sandeep Pandey shares in knowledge on NodeJS.\\r\\n\\r\\nHappenings has loads of details of the various events held across PSL-Goa this quarter. All the committees were actively involved in various activities , check out more in this section .Zoggin is the Project of the Quarter.\\r\\n\\r\\nWe have Framed Savio Mesquita, Project Manager and earlier, part of the Zoggin team . If you wish to see any colleague featured in Framed, do write to us at goanews@persistent.co.in .\\r\\n\\r\\nIn Kaleidoscope don\'t miss the talent museum, it exhibits some of the hidden talents of the PSL-Goa. Take those interesting quizzes in brain teasers, explore a new part of the world in \\"Where in the world\\" and read yet another wonderful recipe in Kitchendom.\\r\\n\\r\\nIn Viva Goem learn more about the Mahar community of Goa in the article the basket weaver. \\"Did you know\\", features yet another beautiful aspect of Goa captured through the lens.\\r\\n\\r\\nPlease send your contributions for the next quarter Fish-4-News as soon as possible, to goanews@persistent.co.in\\r\\n\\r\\nCheers! \\r\\nNadia Fernandes \\r\\nEditor - Fish-4-News \\r\\nPersistent Systems Ltd. \\r\\nGoa.",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Dear Readers,</p>\\n<p>It&#039;s time once again for Goa&#039;s quarterly newsletter!!! Fish-4-News is proud to present its 24th edition of our newsletter.</p>\\n<p>Here&#039;s a peek of what each section has in store for you:</p>\\n<p>Techno Byte is all about technologies that you wanted to learn about, Shaunak Shilimkhan explains us more on cellular technology while Sandeep Pandey shares in knowledge on NodeJS.</p>\\n<p>Happenings has loads of details of the various events held across PSL-Goa this quarter. All the committees were actively involved in various activities , check out more in this section .Zoggin is the Project of the Quarter.</p>\\n<p>We have Framed Savio Mesquita, Project Manager and earlier, part of the Zoggin team . If you wish to see any colleague featured in Framed, do write to us at <a href=\\"mailto:goanews@persistent.co.in\\">goanews@persistent.co.in</a> .</p>\\n<p>In Kaleidoscope don&#039;t miss the talent museum, it exhibits some of the hidden talents of the PSL-Goa. Take those interesting quizzes in brain teasers, explore a new part of the world in &quot;Where in the world&quot; and read yet another wonderful recipe in Kitchendom.</p>\\n<p>In Viva Goem learn more about the Mahar community of Goa in the article the basket weaver. &quot;Did you know&quot;, features yet another beautiful aspect of Goa captured through the lens.</p>\\n<p>Please send your contributions for the next quarter Fish-4-News as soon as possible, to <a href=\\"mailto:goanews@persistent.co.in\\">goanews@persistent.co.in</a></p>\\n<p>Cheers!<br />\\nNadia Fernandes<br />\\nEditor - Fish-4-News<br />\\nPersistent Systems Ltd.<br />\\nGoa.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:17:"mimemail_textonly";i:0;}\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'Cellular Technology\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'99e8ec67-8880-d3d4-b1f4-350d465f5d4f\',
      \'nid\' => \'12\',
      \'type\' => \'articles\',
      \'language\' => \'und\',
      \'created\' => \'1397035445\',
      \'changed\' => \'1397035445\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d730d98f-32b6-28c4-19a8-b7da3bd4b57b\',
      \'revision_timestamp\' => \'1397035445\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Since the cellphones and towers use low power frequencies, the same frequency can be reused in non-adjacent cells. For example, in Figure 1 the two purple cells use the frequency without any interference.\\r\\n\\r\\nA typical analog cell phone system gets around 832 radio frequencies to use in a given city. To establish a full-duplex communication a cell phone uses two of these frequencies (one to transmit and the other to receive simultaneously) per call. The cellular system also uses control channels over which voice data cannot be transmitted. These are reserved for specific data only. There are 42 such channels. This reduces the number of usable channels per city to 790\\r\\n\\r\\nMaximum Voice Channels = 790 / 2 = 395\\r\\n\\r\\nEach cell within a city uses 1/7th of the maximum voice channels available for the city in order to prevent interference through frequency reuse. This is obvious from the fact that each hexagonal cell share an edge with six other hexagonal cells so any cell could therefore use 6 + 1 voice channels of the cellular system at a given instance of time. This reduces the maximum number of simultaneous calls that can be made in a cell to\\r\\n\\r\\nMaximum voice calls per cell = 395 / 7 = 56\\r\\n\\r\\nTo prevent frequency interference each tower and mobile phone pair transmit at low power and this allows our mobile phone to be powered by just a small battery and last us for a day.\\r\\n\\r\\nThe cellular approach requires a large number of base stations in a city of any size. A typical large city can have hundreds of towers. But because so many people are using cell phones, costs remain low per user. Each carrier in each city also runs one central office called the Mobile Telephone Switching Office (MTSO). This office handles all of the phone connections to the normal land-based phone system, and controls all of the base stations in the region.\\r\\n\\r\\nWhen you receive or make a call\\r\\n\\r\\nAll cell phone have unique codes associated with them (see Table 1). These codes are used to identify the phone, the phone\'s owner and the service provider. Let\'s say you turn on your cell phone and someone tries to call you.",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Since the cellphones and towers use low power frequencies, the same frequency can be reused in non-adjacent cells. For example, in Figure 1 the two purple cells use the frequency without any interference.</p>\\n<p>A typical analog cell phone system gets around 832 radio frequencies to use in a given city. To establish a full-duplex communication a cell phone uses two of these frequencies (one to transmit and the other to receive simultaneously) per call. The cellular system also uses control channels over which voice data cannot be transmitted. These are reserved for specific data only. There are 42 such channels. This reduces the number of usable channels per city to 790</p>\\n<p>Maximum Voice Channels = 790 / 2 = 395</p>\\n<p>Each cell within a city uses 1/7th of the maximum voice channels available for the city in order to prevent interference through frequency reuse. This is obvious from the fact that each hexagonal cell share an edge with six other hexagonal cells so any cell could therefore use 6 + 1 voice channels of the cellular system at a given instance of time. This reduces the maximum number of simultaneous calls that can be made in a cell to</p>\\n<p>Maximum voice calls per cell = 395 / 7 = 56</p>\\n<p>To prevent frequency interference each tower and mobile phone pair transmit at low power and this allows our mobile phone to be powered by just a small battery and last us for a day.</p>\\n<p>The cellular approach requires a large number of base stations in a city of any size. A typical large city can have hundreds of towers. But because so many people are using cell phones, costs remain low per user. Each carrier in each city also runs one central office called the Mobile Telephone Switching Office (MTSO). This office handles all of the phone connections to the normal land-based phone system, and controls all of the base stations in the region.</p>\\n<p>When you receive or make a call</p>\\n<p>All cell phone have unique codes associated with them (see Table 1). These codes are used to identify the phone, the phone&#039;s owner and the service provider. Let&#039;s say you turn on your cell phone and someone tries to call you.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_edition\' => array(
        \'und\' => array(
          array(
            \'nid\' => \'11\',
          ),
        ),
      ),
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:17:"mimemail_textonly";i:0;}\',
      \'path\' => array(
        \'pid\' => \'15\',
        \'source\' => \'node/12\',
        \'alias\' => \'content/cellular-technology\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
