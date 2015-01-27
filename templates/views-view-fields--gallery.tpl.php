<?php
	dpm($fields);
	$thumbnail = $fields['field_image_display']->content ?: $fields['field_video']->content ;	

?>
<?php if(!empty($thumbnail)){
	print $thumbnail;
}?>
<div class="caption">
	<h3><?php print $fields['title']->content; ?></h3>
	<?php print $fields['field_caption']->content; ?>

	<?php if(!empty($fields['field_url'])) : ?>
		<div class="float-right">
			<?php print $fields['field_url']->content; ?>
		</div>
	<?php endif; ?>	

</div>
