static const uint8_t fs_font_distance_field_subpixel_glsl[1297] =
{
	0x46, 0x53, 0x48, 0x01, 0x01, 0x83, 0xf2, 0xe1, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, // FSH.....varying 
	0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, // mediump vec4 v_c
	0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x6d, // olor0;.varying m
	0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, // ediump vec4 v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // xcoord0;.uniform
	0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x43, 0x75, 0x62, 0x65, 0x20, 0x75, 0x5f, 0x74, //  samplerCube u_t
	0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, // exColor;.void ma
	0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x74, 0x6d, // in ().{.  int tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_1;.  tmpvar
	0x5f, 0x31, 0x20, 0x3d, 0x20, 0x69, 0x6e, 0x74, 0x28, 0x28, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, // _1 = int(((v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x77, 0x20, 0x2a, 0x20, 0x34, 0x2e, 0x30, 0x29, 0x20, // coord0.w * 4.0) 
	0x2b, 0x20, 0x30, 0x2e, 0x35, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, // + 0.5));.  mediu
	0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, // mp vec3 tmpvar_2
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x64, // ;.  tmpvar_2 = d
	0x46, 0x64, 0x78, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, // Fdx(v_texcoord0.
	0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, // xyz);.  mediump 
	0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, // vec3 tmpvar_3;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x64, 0x46, 0x64, 0x79, //  tmpvar_3 = dFdy
	0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x7a, // (v_texcoord0.xyz
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, // );.  mediump vec
	0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // 3 tmpvar_4;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x31, 0x36, 0x36, 0x36, // pvar_4 = (0.1666
	0x36, 0x37, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x3b, 0x0a, // 67 * tmpvar_2);.
	0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, //   lowp float tmp
	0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_5;.  tmpvar_
	0x35, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x43, 0x75, 0x62, 0x65, 0x20, // 5 = textureCube 
	0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x28, 0x76, 0x5f, // (u_texColor, (v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2d, 0x20, // texcoord0.xyz - 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x29, 0x29, 0x2e, 0x7a, 0x79, 0x78, 0x77, 0x5b, // tmpvar_4)).zyxw[
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, // tmpvar_1];.  low
	0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, // p float tmpvar_6
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x20, 0x3d, 0x20, 0x74, // ;.  tmpvar_6 = t
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x43, 0x75, 0x62, 0x65, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, // extureCube (u_te
	0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // xColor, (v_texco
	0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // ord0.xyz + tmpva
	0x72, 0x5f, 0x34, 0x29, 0x29, 0x2e, 0x7a, 0x79, 0x78, 0x77, 0x5b, 0x74, 0x6d, 0x70, 0x76, 0x61, // r_4)).zyxw[tmpva
	0x72, 0x5f, 0x31, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x66, 0x6c, 0x6f, // r_1];.  lowp flo
	0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x74, // at tmpvar_7;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, 0x2a, // mpvar_7 = (0.5 *
	0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, //  (tmpvar_5 + tmp
	0x76, 0x61, 0x72, 0x5f, 0x36, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, // var_6));.  mediu
	0x6d, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // mp float tmpvar_
	0x38, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x20, 0x3d, 0x20, // 8;.  tmpvar_8 = 
	0x28, 0x38, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x28, 0x73, 0x71, 0x72, 0x74, 0x28, 0x0a, 0x20, 0x20, // (8.0 * (sqrt(.  
	0x20, 0x20, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2c, //   dot (tmpvar_2,
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x20, 0x2b, //  tmpvar_2).  ) +
	0x20, 0x73, 0x71, 0x72, 0x74, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f, 0x74, 0x20, 0x28, //  sqrt(.    dot (
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // tmpvar_3, tmpvar
	0x5f, 0x33, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, // _3).  )));.  low
	0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x3b, // p vec3 tmpvar_9;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x2e, 0x78, 0x20, 0x3d, 0x20, // .  tmpvar_9.x = 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // tmpvar_5;.  tmpv
	0x61, 0x72, 0x5f, 0x39, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ar_9.y = tmpvar_
	0x37, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x2e, 0x7a, 0x20, // 7;.  tmpvar_9.z 
	0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x65, // = tmpvar_6;.  me
	0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x65, 0x64, 0x67, 0x65, // diump float edge
	0x30, 0x5f, 0x31, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x31, 0x30, // 0_10;.  edge0_10
	0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, //  = (0.5 - tmpvar
	0x5f, 0x38, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, // _8);.  lowp vec3
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, //  tmpvar_11;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x20, 0x3d, 0x20, 0x63, 0x6c, 0x61, 0x6d, 0x70, 0x20, // pvar_11 = clamp 
	0x28, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x20, 0x2d, 0x20, 0x65, 0x64, // (((tmpvar_9 - ed
	0x67, 0x65, 0x30, 0x5f, 0x31, 0x30, 0x29, 0x20, 0x2f, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, // ge0_10) / (.    
	0x28, 0x30, 0x2e, 0x35, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x29, // (0.5 + tmpvar_8)
	0x0a, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x31, 0x30, 0x29, 0x29, // .   - edge0_10))
	0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6c, // , 0.0, 1.0);.  l
	0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // owp vec3 tmpvar_
	0x31, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x20, // 12;.  tmpvar_12 
	0x3d, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x20, 0x2a, 0x20, // = ((tmpvar_11 * 
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x20, 0x2a, 0x20, 0x0a, 0x20, 0x20, // (tmpvar_11 * .  
	0x20, 0x20, 0x28, 0x33, 0x2e, 0x30, 0x20, 0x2d, 0x20, 0x28, 0x32, 0x2e, 0x30, 0x20, 0x2a, 0x20, //   (3.0 - (2.0 * 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x29, // tmpvar_11)).  ))
	0x20, 0x2a, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x77, 0x29, 0x3b, 0x0a, //  * v_color0.w);.
	0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x78, //   gl_FragColor.x
	0x79, 0x7a, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x3b, 0x0a, // yz = tmpvar_12;.
	0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, //   lowp float tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // var_13;.  tmpvar
	0x5f, 0x31, 0x33, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x20, // _13 = (tmpvar_7 
	0x2a, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x77, 0x29, 0x3b, 0x0a, 0x20, // * v_color0.w);. 
	0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x77, 0x20, //  gl_FragColor.w 
	0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x33, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, // = tmpvar_13;.}..
	0x00,                                                                                           // .
};
static const uint8_t fs_font_distance_field_subpixel_dx9[885] =
{
	0x46, 0x53, 0x48, 0x01, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x68, 0x03, 0x00, 0x03, 0xff, 0xff, // FSH.......h.....
	0xfe, 0xff, 0x22, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, // ..".CTAB....S...
	0x00, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, // ................
	0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, // L...0...........
	0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, // <.......u_texCol
	0x6f, 0x72, 0x00, 0xab, 0x04, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, // or..............
	0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, // ....ps_3_0.Micro
	0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, // soft (R) HLSL Sh
	0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, // ader Compiler 9.
	0x32, 0x39, 0x2e, 0x39, 0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0x51, 0x00, 0x00, 0x05, // 29.952.3111.Q...
	0x00, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x80, 0x40, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, // .......@...?....
	0x00, 0x00, 0x80, 0x3f, 0x51, 0x00, 0x00, 0x05, 0x01, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0x80, // ...?Q...........
	0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x40, 0xc0, 0x51, 0x00, 0x00, 0x05, // ..........@.Q...
	0x02, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, // ..........@@....
	0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x05, 0x03, 0x00, 0x0f, 0xa0, 0xc1, 0xaa, 0x2a, 0x3e, // ....Q.........*>
	0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, // ...A...?........
	0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, 0x08, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, // ................
	0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x98, 0x00, 0x08, 0x0f, 0xa0, // ................
	0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x01, 0x00, 0xff, 0x90, 0x00, 0x00, 0x00, 0xa0, // ................
	0x00, 0x00, 0x55, 0xa0, 0x13, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, // ..U.............
	0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0x55, 0x81, 0x00, 0x00, 0xaa, 0xa0, // X.........U.....
	0x00, 0x00, 0xff, 0xa0, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, // ................
	0x00, 0x00, 0x55, 0x81, 0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, // ..U.X...........
	0x00, 0x00, 0xaa, 0xa0, 0x00, 0x00, 0xaa, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, // ................
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, // ......U.........
	0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, // ........X.......
	0x00, 0x00, 0xe4, 0x8c, 0x00, 0x00, 0xff, 0xa0, 0x00, 0x00, 0xaa, 0xa0, 0x5b, 0x00, 0x00, 0x02, // ............[...
	0x01, 0x00, 0x07, 0x80, 0x01, 0x00, 0xe4, 0x90, 0x04, 0x00, 0x00, 0x04, 0x02, 0x00, 0x07, 0x80, // ................
	0x01, 0x00, 0xe4, 0x80, 0x03, 0x00, 0x00, 0xa1, 0x01, 0x00, 0xe4, 0x90, 0x42, 0x00, 0x00, 0x03, // ............B...
	0x02, 0x00, 0x0f, 0x80, 0x02, 0x00, 0xe4, 0x80, 0x00, 0x08, 0xe4, 0xa0, 0x09, 0x00, 0x00, 0x03, // ................
	0x02, 0x00, 0x01, 0x80, 0x02, 0x00, 0xc6, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, // ................
	0x03, 0x00, 0x07, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x03, 0x00, 0x00, 0xa0, 0x01, 0x00, 0xe4, 0x90, // ................
	0x08, 0x00, 0x00, 0x03, 0x01, 0x00, 0x01, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x01, 0x00, 0xe4, 0x80, // ................
	0x07, 0x00, 0x00, 0x02, 0x01, 0x00, 0x01, 0x80, 0x01, 0x00, 0x00, 0x80, 0x06, 0x00, 0x00, 0x02, // ................
	0x01, 0x00, 0x01, 0x80, 0x01, 0x00, 0x00, 0x80, 0x42, 0x00, 0x00, 0x03, 0x03, 0x00, 0x0f, 0x80, // ........B.......
	0x03, 0x00, 0xe4, 0x80, 0x00, 0x08, 0xe4, 0xa0, 0x09, 0x00, 0x00, 0x03, 0x02, 0x00, 0x04, 0x80, // ................
	0x03, 0x00, 0xc6, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, // ................
	0x02, 0x00, 0xaa, 0x80, 0x02, 0x00, 0x00, 0x80, 0x05, 0x00, 0x00, 0x03, 0x02, 0x00, 0x02, 0x80, // ................
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x07, 0x80, // ......U.........
	0x01, 0x00, 0xe4, 0x91, 0x5c, 0x00, 0x00, 0x02, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, // ................
	0x08, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x00, 0xe4, 0x80, // ................
	0x07, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x06, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, // ................
	0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x02, 0x80, // ................
	0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x55, 0xa1, 0x03, 0x00, 0xaa, 0xa0, 0x04, 0x00, 0x00, 0x04, // ......U.........
	0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x55, 0xa0, 0x03, 0x00, 0xaa, 0xa0, // ..........U.....
	0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x55, 0x81, 0x00, 0x00, 0x00, 0x80, // ..........U.....
	0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0e, 0x80, 0x00, 0x00, 0x55, 0x81, 0x02, 0x00, 0x90, 0x80, // ..........U.....
	0x05, 0x00, 0x00, 0x03, 0x00, 0x08, 0x08, 0x80, 0x02, 0x00, 0x55, 0x80, 0x00, 0x00, 0xff, 0x90, // ..........U.....
	0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x05, 0x00, 0x00, 0x03, // ................
	0x00, 0x00, 0x17, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0xf9, 0x80, 0x04, 0x00, 0x00, 0x04, // ................
	0x01, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0xa0, 0x02, 0x00, 0x55, 0xa0, // ..............U.
	0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x00, 0xe4, 0x80, // ................
	0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x01, 0x00, 0xe4, 0x80, // ................
	0x05, 0x00, 0x00, 0x03, 0x00, 0x08, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x00, 0xff, 0x90, // ................
	0xff, 0xff, 0x00, 0x00, 0x00,                                                                   // .....
};
static const uint8_t fs_font_distance_field_subpixel_dx11[1622] =
{
	0x46, 0x53, 0x48, 0x01, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, // FSH.............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x06, 0x44, 0x58, 0x42, // ...........8.DXB
	0x43, 0x55, 0xe8, 0x22, 0x12, 0xa3, 0x37, 0xd2, 0x08, 0x82, 0x55, 0x7b, 0x0d, 0x74, 0x00, 0xe7, // CU."..7...U{.t..
	0xb4, 0x01, 0x00, 0x00, 0x00, 0x38, 0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, // .....8.......4..
	0x00, 0xf0, 0x00, 0x00, 0x00, 0x64, 0x01, 0x00, 0x00, 0x98, 0x01, 0x00, 0x00, 0xbc, 0x05, 0x00, // .....d..........
	0x00, 0x52, 0x44, 0x45, 0x46, 0xb4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .RDEF...........
	0x00, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x04, 0xff, 0xff, 0x00, 0x91, 0x00, // ................
	0x00, 0x80, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, // .....n..........
	0x00, 0x09, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x0d, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, // .....u_texColorS
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // ampler.u_texColo
	0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, // rTexture.Microso
	0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, // ft (R) HLSL Shad
	0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, 0x32, 0x39, // er Compiler 9.29
	0x2e, 0x39, 0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0xab, 0xab, 0xab, 0x49, 0x53, 0x47, // .952.3111....ISG
	0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, // Nl...........P..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x08, 0x00, 0x00, 0x62, 0x00, 0x00, // .............b..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x0f, 0x0f, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, // .....SV_POSITION
	0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, // .COLOR.TEXCOORD.
	0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // .OSGN,..........
	0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // . ..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, // .........SV_TARG
	0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x1c, 0x04, 0x00, 0x00, 0x40, 0x00, 0x00, // ET...SHDR....@..
	0x00, 0x07, 0x01, 0x00, 0x00, 0x35, 0x18, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, // .....5..........
	0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ?...............
	0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ....?...........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........?.......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x5a, 0x00, 0x00, // ............?Z..
	0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x30, 0x00, 0x04, 0x00, 0x70, 0x10, // ..`......X0...p.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x82, 0x10, 0x10, // .....UU..b......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, // .....b..........
	0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, // .e.... ......h..
	0x02, 0x03, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x09, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .....2..........
	0x00, 0x3a, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, // .:........@.....
	0x40, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x1b, 0x00, 0x00, 0x05, 0x12, 0x00, 0x10, // @.@.....?.......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, // ................
	0x05, 0xe2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x19, 0x10, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x32, 0x00, 0x00, 0x0d, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x96, 0x07, 0x10, // .2...r..........
	0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0xc1, 0xaa, 0x2a, // .A........@....*
	0x3e, 0xc1, 0xaa, 0x2a, 0x3e, 0xc1, 0xaa, 0x2a, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, // >..*>..*>....F..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, // .....E..........
	0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, // .F.......F~.....
	0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x08, 0x12, 0x00, 0x10, // ..`.............
	0x00, 0x01, 0x00, 0x00, 0x00, 0x66, 0x0c, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x9e, 0x90, // .....f.......F..
	0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0c, 0x72, 0x00, 0x10, // .........2...r..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x96, 0x07, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, // ..............@.
	0x00, 0xc1, 0xaa, 0x2a, 0x3e, 0xc1, 0xaa, 0x2a, 0x3e, 0xc1, 0xaa, 0x2a, 0x3e, 0x00, 0x00, 0x00, // ...*>..*>..*>...
	0x00, 0x46, 0x12, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x07, 0x22, 0x00, 0x10, // .F..........."..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x07, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x07, 0x10, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, // .....E..........
	0x00, 0x46, 0x02, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, // .F.......F~.....
	0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x08, 0x42, 0x00, 0x10, // ..`..........B..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x66, 0x0c, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x9e, 0x90, // .....f.......F..
	0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, // .....*..........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x22, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, // .....8..."......
	0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........@.....
	0x3f, 0x36, 0x00, 0x00, 0x06, 0xd2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x19, 0x10, // ?6..............
	0x80, 0x41, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x05, 0xd2, 0x00, 0x10, // .A..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // ................
	0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x03, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x86, 0x03, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x05, 0x32, 0x00, 0x10, // .........K...2..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....F..........
	0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x22, 0x00, 0x10, // .........2..."..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........A......
	0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, // ..@.....A.@.....
	0x3f, 0x32, 0x00, 0x00, 0x09, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, // ?2..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x01, 0x40, 0x00, // ......@.....A.@.
	0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x08, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ....?...........
	0x00, 0x1a, 0x00, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, // .....A..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xe2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x56, 0x05, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x09, 0x10, // .V...A..........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, // .....8.... .....
	0x00, 0x1a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3a, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, // .........:......
	0x00, 0x0e, 0x00, 0x00, 0x0a, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, // ..............@.
	0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, // ....?...?...?...
	0x3f, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x20, 0x00, 0x07, 0x72, 0x00, 0x10, // ?........8 ..r..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x07, 0x10, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0f, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, // .....2...r......
	0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, // .F........@.....
	0xc0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, // ..............@.
	0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, // ...@@..@@..@@...
	0x00, 0x38, 0x00, 0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, // .8...r.......F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, // .....F.......8..
	0x07, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, // .r.......F......
	0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x72, 0x20, 0x10, // .F.......8...r .
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0x1f, 0x10, // .....F..........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x53, 0x54, 0x41, 0x54, 0x74, 0x00, 0x00, // .....>...STATt..
	0x00, 0x1d, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                                             // ......
};
