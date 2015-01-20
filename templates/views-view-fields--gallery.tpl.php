<?php
	dpm($fields);
	$thumbnail = !empty($fields['field_image_display']) ? ($fields['field_image_display']->content : (!empty($fields['field_video']) ? $fields['field_video']->content : empty);
?>
<?php if(!empty($thumbnail)){
	print $thumbnail;
}?>
<div class="caption">
	<h3><?php print $title; ?></h3>
	<?php print $fields['field_caption']->content; ?>
</div>
