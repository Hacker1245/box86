#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

//GO(cairo_append_path, 
//GO(cairo_arc, 
//GO(cairo_arc_negative, 
GO(cairo_clip, vFp)
GO(cairo_clip_extents, vFppppp)
GO(cairo_clip_preserve, vFp)
//GO(cairo_close_path, 
GO(cairo_copy_clip_rectangle_list, pFp)
GO(cairo_copy_page, vFp)
//GO(cairo_copy_path, 
//GO(cairo_copy_path_flat, 
GO(cairo_create, pFp)
//GO(cairo_curve_to, 
//GO(cairo_debug_reset_static_data, 
GO(cairo_destroy, vFp)
//GO(cairo_device_acquire, 
//GO(cairo_device_destroy, 
//GO(cairo_device_finish, 
//GO(cairo_device_flush, 
//GO(cairo_device_get_reference_count, 
//GO(cairo_device_get_type, 
//GO(cairo_device_get_user_data, 
//GO(cairo_device_observer_elapsed, 
//GO(cairo_device_observer_fill_elapsed, 
//GO(cairo_device_observer_glyphs_elapsed, 
//GO(cairo_device_observer_mask_elapsed, 
//GO(cairo_device_observer_paint_elapsed, 
//GO(cairo_device_observer_print, 
//GO(cairo_device_observer_stroke_elapsed, 
//GO(cairo_device_reference, 
//GO(cairo_device_release, 
//GO(cairo_device_set_user_data, 
//GO(cairo_device_status, 
//GO(cairo_device_to_user, 
//GO(cairo_device_to_user_distance, 
GO(cairo_fill, vFp)
GO(cairo_fill_extents, vFppppp)
GO(cairo_fill_preserve, vFp)
//GO(cairo_font_extents, 
//GO(cairo_font_face_destroy, 
//GO(cairo_font_face_get_reference_count, 
//GO(cairo_font_face_get_type, 
//GO(cairo_font_face_get_user_data, 
//GO(cairo_font_face_reference, 
//GO(cairo_font_face_set_user_data, 
//GO(cairo_font_face_status, 
//GO(cairo_font_options_copy, 
//GO(cairo_font_options_create, 
//GO(cairo_font_options_destroy, 
//GO(cairo_font_options_equal, 
//GO(cairo_font_options_get_antialias, 
//GO(cairo_font_options_get_hint_metrics, 
//GO(cairo_font_options_get_hint_style, 
//GO(cairo_font_options_get_subpixel_order, 
//GO(cairo_font_options_hash, 
//GO(cairo_font_options_merge, 
//GO(cairo_font_options_set_antialias, 
//GO(cairo_font_options_set_hint_metrics, 
//GO(cairo_font_options_set_hint_style, 
//GO(cairo_font_options_set_subpixel_order, 
//GO(cairo_font_options_status, 
//GO(cairo_format_stride_for_width, 
//GO(cairo_ft_font_face_create_for_ft_face, 
//GO(cairo_ft_font_face_create_for_pattern, 
//GO(cairo_ft_font_face_get_synthesize, 
//GO(cairo_ft_font_face_set_synthesize, 
//GO(cairo_ft_font_face_unset_synthesize, 
//GO(cairo_ft_font_options_substitute, 
//GO(cairo_ft_scaled_font_lock_face, 
//GO(cairo_ft_scaled_font_unlock_face, 
GO(cairo_get_antialias, iFp)
//GO(cairo_get_current_point, 
GO(cairo_get_dash, vFppp)
GO(cairo_get_dash_count, iFp)
GO(cairo_get_fill_rule, iFp)
//GO(cairo_get_font_face, 
//GO(cairo_get_font_matrix, 
//GO(cairo_get_font_options, 
GO(cairo_get_group_target, pFp)
GO(cairo_get_line_cap, iFp)
GO(cairo_get_line_join, iFp)
GO(cairo_get_line_width, dFp)
//GO(cairo_get_matrix, 
GO(cairo_get_miter_limit, dFp)
GO(cairo_get_operator, iFp)
GO(cairo_get_reference_count, uFp)
//GO(cairo_get_scaled_font, 
GO(cairo_get_source, pFp)
GO(cairo_get_target, pFp)
GO(cairo_get_tolerance, dFp)
GO(cairo_get_user_data, pFpp)
//GO(cairo_glyph_allocate, 
//GO(cairo_glyph_extents, 
//GO(cairo_glyph_free, 
//GO(cairo_glyph_path, 
//GO(cairo_has_current_point, 
//GO(cairo_identity_matrix, 
//GO(cairo_image_surface_create, 
//GO(cairo_image_surface_create_for_data, 
//GO(cairo_image_surface_create_from_png, 
//GO(cairo_image_surface_create_from_png_stream, 
//GO(cairo_image_surface_get_data, 
//GO(cairo_image_surface_get_format, 
//GO(cairo_image_surface_get_height, 
//GO(cairo_image_surface_get_stride, 
//GO(cairo_image_surface_get_width, 
GO(cairo_in_clip, iFpdd)
GO(cairo_in_fill, iFpdd)
GO(cairo_in_stroke, iFpdd)
//GO(cairo_line_to, 
GO(cairo_mask, vFpp)
GO(cairo_mask_surface, vFppdd)
//GO(cairo_matrix_init, 
//GO(cairo_matrix_init_identity, 
//GO(cairo_matrix_init_rotate, 
//GO(cairo_matrix_init_scale, 
//GO(cairo_matrix_init_translate, 
//GO(cairo_matrix_invert, 
//GO(cairo_matrix_multiply, 
//GO(cairo_matrix_rotate, 
//GO(cairo_matrix_scale, 
//GO(cairo_matrix_transform_distance, 
//GO(cairo_matrix_transform_point, 
//GO(cairo_matrix_translate, 
//GO(cairo_mesh_pattern_begin_patch, 
//GO(cairo_mesh_pattern_curve_to, 
//GO(cairo_mesh_pattern_end_patch, 
//GO(cairo_mesh_pattern_get_control_point, 
//GO(cairo_mesh_pattern_get_corner_color_rgba, 
//GO(cairo_mesh_pattern_get_patch_count, 
//GO(cairo_mesh_pattern_get_path, 
//GO(cairo_mesh_pattern_line_to, 
//GO(cairo_mesh_pattern_move_to, 
//GO(cairo_mesh_pattern_set_control_point, 
//GO(cairo_mesh_pattern_set_corner_color_rgb, 
//GO(cairo_mesh_pattern_set_corner_color_rgba, 
//GO(cairo_move_to, 
//GO(cairo_new_path, 
//GO(cairo_new_sub_path, 
GO(cairo_paint, vFp)
GO(cairo_paint_with_alpha, vFpd)
//GO(cairo_path_destroy, 
//GO(cairo_path_extents, 
//GO(cairo_pattern_add_color_stop_rgb, 
//GO(cairo_pattern_add_color_stop_rgba, 
//GO(cairo_pattern_create_for_surface, 
//GO(cairo_pattern_create_linear, 
//GO(cairo_pattern_create_mesh, 
//GO(cairo_pattern_create_radial, 
//GO(cairo_pattern_create_raster_source, 
//GO(cairo_pattern_create_rgb, 
//GO(cairo_pattern_create_rgba, 
//GO(cairo_pattern_destroy, 
//GO(cairo_pattern_get_color_stop_count, 
//GO(cairo_pattern_get_color_stop_rgba, 
//GO(cairo_pattern_get_extend, 
//GO(cairo_pattern_get_filter, 
//GO(cairo_pattern_get_linear_points, 
//GO(cairo_pattern_get_matrix, 
//GO(cairo_pattern_get_radial_circles, 
//GO(cairo_pattern_get_reference_count, 
//GO(cairo_pattern_get_rgba, 
//GO(cairo_pattern_get_surface, 
//GO(cairo_pattern_get_type, 
//GO(cairo_pattern_get_user_data, 
//GO(cairo_pattern_reference, 
//GO(cairo_pattern_set_extend, 
//GO(cairo_pattern_set_filter, 
//GO(cairo_pattern_set_matrix, 
//GO(cairo_pattern_set_user_data, 
//GO(cairo_pattern_status, 
//GO(cairo_pdf_get_versions, 
//GO(cairo_pdf_surface_create, 
//GO(cairo_pdf_surface_create_for_stream, 
//GO(cairo_pdf_surface_restrict_to_version, 
//GO(cairo_pdf_surface_set_size, 
//GO(cairo_pdf_version_to_string, 
GO(cairo_pop_group, pFp)
GO(cairo_pop_group_to_source, vFp)
//GO(cairo_ps_get_levels, 
//GO(cairo_ps_level_to_string, 
//GO(cairo_ps_surface_create, 
//GO(cairo_ps_surface_create_for_stream, 
//GO(cairo_ps_surface_dsc_begin_page_setup, 
//GO(cairo_ps_surface_dsc_begin_setup, 
//GO(cairo_ps_surface_dsc_comment, 
//GO(cairo_ps_surface_get_eps, 
//GO(cairo_ps_surface_restrict_to_level, 
//GO(cairo_ps_surface_set_eps, 
//GO(cairo_ps_surface_set_size, 
GO(cairo_push_group, vFp)
GO(cairo_push_group_with_content, vFpi)
//GO(cairo_raster_source_pattern_get_acquire, 
//GO(cairo_raster_source_pattern_get_callback_data, 
//GO(cairo_raster_source_pattern_get_copy, 
//GO(cairo_raster_source_pattern_get_finish, 
//GO(cairo_raster_source_pattern_get_snapshot, 
//GO(cairo_raster_source_pattern_set_acquire, 
//GO(cairo_raster_source_pattern_set_callback_data, 
//GO(cairo_raster_source_pattern_set_copy, 
//GO(cairo_raster_source_pattern_set_finish, 
//GO(cairo_raster_source_pattern_set_snapshot, 
//GO(cairo_recording_surface_create, 
//GO(cairo_recording_surface_get_extents, 
//GO(cairo_recording_surface_ink_extents, 
//GO(cairo_rectangle, 
GO(cairo_rectangle_list_destroy, vFp)
GO(cairo_reference, pFp)
//GO(cairo_region_contains_point, 
//GO(cairo_region_contains_rectangle, 
//GO(cairo_region_copy, 
//GO(cairo_region_create, 
//GO(cairo_region_create_rectangle, 
//GO(cairo_region_create_rectangles, 
//GO(cairo_region_destroy, 
//GO(cairo_region_equal, 
//GO(cairo_region_get_extents, 
//GO(cairo_region_get_rectangle, 
//GO(cairo_region_intersect, 
//GO(cairo_region_intersect_rectangle, 
//GO(cairo_region_is_empty, 
//GO(cairo_region_num_rectangles, 
//GO(cairo_region_reference, 
//GO(cairo_region_status, 
//GO(cairo_region_subtract, 
//GO(cairo_region_subtract_rectangle, 
//GO(cairo_region_translate, 
//GO(cairo_region_union, 
//GO(cairo_region_union_rectangle, 
//GO(cairo_region_xor, 
//GO(cairo_region_xor_rectangle, 
//GO(cairo_rel_curve_to, 
//GO(cairo_rel_line_to, 
//GO(cairo_rel_move_to, 
GO(cairo_reset_clip, vFp)
GO(cairo_restore, vFp)
//GO(cairo_rotate, 
GO(cairo_save, vFp)
//GO(cairo_scale, 
//GO(cairo_scaled_font_create, 
//GO(cairo_scaled_font_destroy, 
//GO(cairo_scaled_font_extents, 
//GO(cairo_scaled_font_get_ctm, 
//GO(cairo_scaled_font_get_font_face, 
//GO(cairo_scaled_font_get_font_matrix, 
//GO(cairo_scaled_font_get_font_options, 
//GO(cairo_scaled_font_get_reference_count, 
//GO(cairo_scaled_font_get_scale_matrix, 
//GO(cairo_scaled_font_get_type, 
//GO(cairo_scaled_font_get_user_data, 
//GO(cairo_scaled_font_glyph_extents, 
//GO(cairo_scaled_font_reference, 
//GO(cairo_scaled_font_set_user_data, 
//GO(cairo_scaled_font_status, 
//GO(cairo_scaled_font_text_extents, 
//GO(cairo_scaled_font_text_to_glyphs, 
//GO(cairo_script_create, 
//GO(cairo_script_create_for_stream, 
//GO(cairo_script_from_recording_surface, 
//GO(cairo_script_get_mode, 
//GO(cairo_script_set_mode, 
//GO(cairo_script_surface_create, 
//GO(cairo_script_surface_create_for_target, 
//GO(cairo_script_write_comment, 
//GO(cairo_select_font_face, 
GO(cairo_set_antialias, vFpi)
GO(cairo_set_dash, vFppid)
GO(cairo_set_fill_rule, vFpi)
//GO(cairo_set_font_face, 
//GO(cairo_set_font_matrix, 
//GO(cairo_set_font_options, 
//GO(cairo_set_font_size, 
GO(cairo_set_line_cap, vFpi)
GO(cairo_set_line_join, vFpi)
GO(cairo_set_line_width, vFpd)
GO(cairo_set_matrix, vFpp)
GO(cairo_set_miter_limit, vFpd)
GO(cairo_set_operator, vFpi)
//GO(cairo_set_scaled_font, 
GO(cairo_set_source, vFpp)
GO(cairo_set_source_rgb, vFpddd)
GO(cairo_set_source_rgba, vFpdddd)
GO(cairo_set_source_surface, vFppdd)
GO(cairo_set_tolerance, vFpd)
//GOM(cairo_set_user_data, iFEpppp)
//GO(cairo_show_glyphs, 
GO(cairo_show_page, vFp)
//GO(cairo_show_text, 
//GO(cairo_show_text_glyphs, 
GO(cairo_status, iFp)
//GO(cairo_status_to_string, 
GO(cairo_stroke, vFp)
GO(cairo_stroke_extents, vFppppp)
GO(cairo_stroke_preserve, vFp)
GO(cairo_surface_copy_page, vFp)
GO(cairo_surface_create_for_rectangle, pFpdddd)
//GO(cairo_surface_create_observer, 
GO(cairo_surface_create_similar, pFppii)
GO(cairo_surface_create_similar_image, pFppii)
GO(cairo_surface_destroy, vFp)
GO(cairo_surface_finish, vFp)
GO(cairo_surface_flush, vFp)
GO(cairo_surface_get_content, pFp)
GO(cairo_surface_get_device, pFp)
GO(cairo_surface_get_device_offset, vFppp)
GO(cairo_surface_get_device_scale, vFpp)
GO(cairo_surface_get_fallback_resolution, vFppp)
GO(cairo_surface_get_font_options, vFpp)
GO(cairo_surface_get_mime_data, vFpppp)
GO(cairo_surface_get_reference_count, uFp)
GO(cairo_surface_get_type, iFp)
GO(cairo_surface_get_user_data, pFpp)
GO(cairo_surface_has_show_text_glyphs, iFp)
GO(cairo_surface_map_to_image, pFpp)
GO(cairo_surface_mark_dirty, vFp)
GO(cairo_surface_mark_dirty_rectangle, vFpiiii)
//GO(cairo_surface_observer_add_fill_callback, 
//GO(cairo_surface_observer_add_finish_callback, 
//GO(cairo_surface_observer_add_flush_callback, 
//GO(cairo_surface_observer_add_glyphs_callback, 
//GO(cairo_surface_observer_add_mask_callback, 
//GO(cairo_surface_observer_add_paint_callback, 
//GO(cairo_surface_observer_add_stroke_callback, 
//GO(cairo_surface_observer_elapsed, 
//GO(cairo_surface_observer_print, 
GO(cairo_surface_reference, pFp)
GO(cairo_surface_set_device_offset, vFpdd)
GO(cairo_surface_set_device_scale, vFpdd)
GO(cairo_surface_set_fallback_resolution, vFpdd)
//GOM(cairo_surface_set_mime_data, iFEpppLpp)
//GOM(cairo_surface_set_user_data, iFEpppp)
GO(cairo_surface_show_page, vFp)
GO(cairo_surface_status, iFp)
GO(cairo_surface_supports_mime_type, iFpp)
GO(cairo_surface_unmap_image, vFpp)
//GO(cairo_surface_write_to_png, 
//GO(cairo_surface_write_to_png_stream, 
//GO(cairo_svg_get_versions, 
//GO(cairo_svg_surface_create, 
//GO(cairo_svg_surface_create_for_stream, 
//GO(cairo_svg_surface_restrict_to_version, 
//GO(cairo_svg_version_to_string, 
//GO(cairo_text_cluster_allocate, 
//GO(cairo_text_cluster_free, 
//GO(cairo_text_extents, 
//GO(cairo_text_path, 
//GO(cairo_toy_font_face_create, 
//GO(cairo_toy_font_face_get_family, 
//GO(cairo_toy_font_face_get_slant, 
//GO(cairo_toy_font_face_get_weight, 
//GO(cairo_transform, 
//GO(cairo_translate, 
//GO(cairo_user_font_face_create, 
//GO(cairo_user_font_face_get_init_func, 
//GO(cairo_user_font_face_get_render_glyph_func, 
//GO(cairo_user_font_face_get_text_to_glyphs_func, 
//GO(cairo_user_font_face_get_unicode_to_glyph_func, 
//GO(cairo_user_font_face_set_init_func, 
//GO(cairo_user_font_face_set_render_glyph_func, 
//GO(cairo_user_font_face_set_text_to_glyphs_func, 
//GO(cairo_user_font_face_set_unicode_to_glyph_func, 
//GO(cairo_user_to_device, 
//GO(cairo_user_to_device_distance, 
//GO(cairo_version, 
//GO(cairo_version_string, 
//GO(cairo_xcb_device_debug_cap_xrender_version, 
//GO(cairo_xcb_device_debug_cap_xshm_version, 
//GO(cairo_xcb_device_debug_get_precision, 
//GO(cairo_xcb_device_debug_set_precision, 
//GO(cairo_xcb_device_get_connection, 
//GO(cairo_xcb_surface_create, 
//GO(cairo_xcb_surface_create_for_bitmap, 
//GO(cairo_xcb_surface_create_with_xrender_format, 
//GO(cairo_xcb_surface_set_drawable, 
//GO(cairo_xcb_surface_set_size, 
//GO(cairo_xlib_device_debug_cap_xrender_version, 
//GO(cairo_xlib_device_debug_get_precision, 
//GO(cairo_xlib_device_debug_set_precision, 
//GO(cairo_xlib_surface_create, 
//GO(cairo_xlib_surface_create_for_bitmap, 
//GO(cairo_xlib_surface_create_with_xrender_format, 
//GO(cairo_xlib_surface_get_depth, 
//GO(cairo_xlib_surface_get_display, 
//GO(cairo_xlib_surface_get_drawable, 
//GO(cairo_xlib_surface_get_height, 
//GO(cairo_xlib_surface_get_screen, 
//GO(cairo_xlib_surface_get_visual, 
//GO(cairo_xlib_surface_get_width, 
//GO(cairo_xlib_surface_get_xrender_format, 
//GO(cairo_xlib_surface_set_drawable, 
//GO(cairo_xlib_surface_set_size, 
//GO(cairo_xml_create, 
//GO(cairo_xml_create_for_stream, 
//GO(cairo_xml_for_recording_surface, 
//GO(cairo_xml_surface_create, 
