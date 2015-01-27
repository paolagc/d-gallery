<?php
	dpm($fields);
	$thumbnail = $fields['field_image_display']->content ?: $fields['field_video']->content ;
	dpm($thumbnail);
?>
<?php if(!empty($thumbnail)){
	print $thumbnail;
}?>
<div class="caption">
	<h3><?php print $fields['title']->content; ?></h3>
	<?php print $fields['field_caption']->content; ?>
</div>
