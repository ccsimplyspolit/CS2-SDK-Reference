#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x658
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_PointCamera : public source2sdk::client::C_BaseEntity
        {
        public:
            float m_FOV; // 0x5f0            
            float m_Resolution; // 0x5f4            
            bool m_bFogEnable; // 0x5f8            
            Color m_FogColor; // 0x5f9            
            uint8_t _pad05fd[0x3]; // 0x5fd
            float m_flFogStart; // 0x600            
            float m_flFogEnd; // 0x604            
            float m_flFogMaxDensity; // 0x608            
            bool m_bActive; // 0x60c            
            bool m_bUseScreenAspectRatio; // 0x60d            
            uint8_t _pad060e[0x2]; // 0x60e
            float m_flAspectRatio; // 0x610            
            bool m_bNoSky; // 0x614            
            uint8_t _pad0615[0x3]; // 0x615
            float m_fBrightness; // 0x618            
            float m_flZFar; // 0x61c            
            float m_flZNear; // 0x620            
            bool m_bCanHLTVUse; // 0x624            
            bool m_bAlignWithParent; // 0x625            
            uint8_t _pad0626[0x2]; // 0x626
            float m_flOverrideShadowFarZ; // 0x628            
            bool m_bDofEnabled; // 0x62c            
            uint8_t _pad062d[0x3]; // 0x62d
            float m_flDofNearBlurry; // 0x630            
            float m_flDofNearCrisp; // 0x634            
            float m_flDofFarCrisp; // 0x638            
            float m_flDofFarBlurry; // 0x63c            
            float m_flDofTiltToGround; // 0x640            
            float m_TargetFOV; // 0x644            
            float m_DegreesPerSecond; // 0x648            
            bool m_bIsOn; // 0x64c            
            uint8_t _pad064d[0x3]; // 0x64d
            // metadata: MNotSaved
            source2sdk::client::C_PointCamera* m_pNext; // 0x650            
            
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
        
        // Cannot assert offsets of fields in C_PointCamera because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointCamera) == 0x658);
    };
};
