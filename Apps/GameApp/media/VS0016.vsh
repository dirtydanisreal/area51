;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
;   Vertex fragment: kVS_SHADOW_TEX0
;
;   v0.xyz    = Position    c00-c79 = matrix palette
;   v1.xyz    = Normal      c92-c95 = world to clip
;   v2.xy     = Uv          c88-c91 = light dir mtx
;   v2.zw     = Weight      c84-c87 = light col mtx
;   v3.xy     = Bone        c83     = ambient
;
;                           c-1     = useful constants
;                           c-5     = env transform
;                           c-6     = fog info
;                       c-95 to -32 = fog table
;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;==----------------------------------------------------------------------------
;
;   Transform vertex( L2C )
;
;==----------------------------------------------------------------------------

    mul r0, c-31, v0.x       ;   dp4 r0.x, v0, c-31
    mad r0, c-30, v0.y, r0   ;   dp4 r0.y, v0, c-30
    mad r0, c-29, v0.z, r0   ;   dp4 r0.z, v0, c-29
    mad r0, c-28, v0.w, r0   ;   dp4 r0.w, v0, c-28

    sge r1,-r0.z,-c-27.w     ;   r0 = r0.z <= 0.0 ? 1.0 : 0.0

;==----------------------------------------------------------------------------
;
;   Transform normal( L2V )
;
;==----------------------------------------------------------------------------

    mul r2, c80, v1.x       ;   dp4 r0.x, v0, c80
    mad r2, c81, v1.y, r2   ;   dp4 r0.y, v0, c81
    mad r2, c82, v1.z, r2   ;   dp4 r0.z, v0, c82
    mad r2, c83, v1.w, r2   ;   dp4 r0.w, v0, c83

    slt oD1, c83.x, r2.z    ;   if( r2.z < 0 ) r2 = white else r2 = black

;==----------------------------------------------------------------------------
;
;   Set UV
;
;==----------------------------------------------------------------------------

    mad r0.xy,r0.xy,c-26.zw,c-26.xy
    mov oT0.xyz,r0
    mov oD0,r1
