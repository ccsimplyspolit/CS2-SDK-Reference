#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x490
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelPlayerPawn_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_pszSprintState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_pszSprintState;
            char m_pszSprintState[0x30]; // 0x90            
            // m_pszFullBodySequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_pszFullBodySequence;
            char m_pszFullBodySequence[0x30]; // 0xc0            
            // m_pszFlinchType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_pszFlinchType;
            char m_pszFlinchType[0x30]; // 0xf0            
            // m_bShootLean has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bShootLean;
            char m_bShootLean[0x28]; // 0x120            
            // m_flReloadFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flReloadFraction;
            char m_flReloadFraction[0x28]; // 0x148            
            // m_bMovementInputActive has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bMovementInputActive;
            char m_bMovementInputActive[0x28]; // 0x170            
            // m_bLowHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bLowHealth;
            char m_bLowHealth[0x28]; // 0x198            
            // m_flTimeScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flTimeScale;
            char m_flTimeScale[0x28]; // 0x1c0            
            // m_bCrouching has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bCrouching;
            char m_bCrouching[0x28]; // 0x1e8            
            // m_bInAir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bInAir;
            char m_bInAir[0x28]; // 0x210            
            // m_bShopOpen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bShopOpen;
            char m_bShopOpen[0x28]; // 0x238            
            // m_bRespawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bRespawn;
            char m_bRespawn[0x28]; // 0x260            
            CAnimGraphTagRef m_sAnimClippedMovement; // 0x288            
            CAnimGraphTagRef m_sDisableGravity; // 0x2a8            
            CAnimGraphTagRef m_sDirectAirControl; // 0x2c8            
            // m_pszMaxSpeedState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_pszMaxSpeedState;
            char m_pszMaxSpeedState[0x30]; // 0x2e8            
            // m_pszDeathSequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_pszDeathSequence;
            char m_pszDeathSequence[0x30]; // 0x318            
            // m_pszWallAttach has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_pszWallAttach;
            char m_pszWallAttach[0x30]; // 0x348            
            // m_bHardLanding has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bHardLanding;
            char m_bHardLanding[0x28]; // 0x378            
            // m_flUltCooldownProgress has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flUltCooldownProgress;
            char m_flUltCooldownProgress[0x28]; // 0x3a0            
            // m_bSpawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bSpawn;
            char m_bSpawn[0x28]; // 0x3c8            
            // m_flAmmoFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flAmmoFraction;
            char m_flAmmoFraction[0x28]; // 0x3f0            
            // m_flLookPitchRelativeToEyes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flLookPitchRelativeToEyes;
            char m_flLookPitchRelativeToEyes[0x28]; // 0x418            
            // m_flSlideSurfacePitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flSlideSurfacePitch;
            char m_flSlideSurfacePitch[0x28]; // 0x440            
            // m_flSlideSurfaceRoll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flSlideSurfaceRoll;
            char m_flSlideSurfaceRoll[0x28]; // 0x468            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayerPawn_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelPlayerPawn_GraphController) == 0x490);
    };
};
