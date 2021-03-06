<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h2><?php print $title; ?></h2>
<?php endif; ?>
<div class="autopager">
	<?php foreach ($rows as $id => $row): ?>
	  <div<?php if ($classes_array[$id]) { print ' class=" item box ' . $classes_array[$id] .'"';  } ?>>
	    <?php print $row; ?>
	  </div>
	<?php endforeach; ?>
</div>
