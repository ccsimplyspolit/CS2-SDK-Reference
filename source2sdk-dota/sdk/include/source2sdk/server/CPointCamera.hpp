#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x500
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CPointCamera : public source2sdk::server::CBaseEntity
        {
        public:
            float m_FOV; // 0x498            
            float m_Resolution; // 0x49c            
            bool m_bFogEnable; // 0x4a0            
            Color m_FogColor; // 0x4a1            
            uint8_t _pad04a5[0x3]; // 0x4a5
            float m_flFogStart; // 0x4a8            
            float m_flFogEnd; // 0x4ac            
            float m_flFogMaxDensity; // 0x4b0            
            bool m_bActive; // 0x4b4            
            bool m_bUseScreenAspectRatio; // 0x4b5            
            uint8_t _pad04b6[0x2]; // 0x4b6
            float m_flAspectRatio; // 0x4b8            
            bool m_bNoSky; // 0x4bc            
            uint8_t _pad04bd[0x3]; // 0x4bd
            float m_fBrightness; // 0x4c0            
            float m_flZFar; // 0x4c4            
            float m_flZNear; // 0x4c8            
            bool m_bCanHLTVUse; // 0x4cc            
            bool m_bAlignWithParent; // 0x4cd            
            uint8_t _pad04ce[0x2]; // 0x4ce
            float m_flOverrideShadowFarZ; // 0x4d0            
            bool m_bDofEnabled; // 0x4d4            
            uint8_t _pad04d5[0x3]; // 0x4d5
            float m_flDofNearBlurry; // 0x4d8            
            float m_flDofNearCrisp; // 0x4dc            
            float m_flDofFarCrisp; // 0x4e0            
            float m_flDofFarBlurry; // 0x4e4            
            float m_flDofTiltToGround; // 0x4e8            
            float m_TargetFOV; // 0x4ec            
            float m_DegreesPerSecond; // 0x4f0            
            bool m_bIsOn; // 0x4f4            
            uint8_t _pad04f5[0x3]; // 0x4f5
            // metadata: MNotSaved
            source2sdk::server::CPointCamera* m_pNext; // 0x4f8            
            
            // Datamap fields:
            // CUtlSymbolLarge InputChangeFOV; // 0x0
            // void InputSetOnAndTurnOthersOff; // 0x0
            // void InputSetOn; // 0x0
            // void InputSetOff; // 0x0
            // void InputForceActive; // 0x0
            // void InputForceInactive; // 0x0
            // void InputEnableDOF; // 0x0
            // void InputDisableDOF; // 0x0
            // float InputSetDOFNearBlurry; // 0x0
            // float InputSetDOFNearCrisp; // 0x0
            // float InputSetDOFFarCrisp; // 0x0
            // float InputSetDOFFarBlurry; // 0x0
            // float InputSetDOFTiltToGround; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointCamera because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointCamera) == 0x500);
    };
};
