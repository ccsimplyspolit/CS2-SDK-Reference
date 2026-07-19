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
        // Size: 0x660
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_PointCamera : public source2sdk::client::C_BaseEntity
        {
        public:
            float m_FOV; // 0x600            
            float m_Resolution; // 0x604            
            bool m_bFogEnable; // 0x608            
            Color m_FogColor; // 0x609            
            uint8_t _pad060d[0x3]; // 0x60d
            float m_flFogStart; // 0x610            
            float m_flFogEnd; // 0x614            
            float m_flFogMaxDensity; // 0x618            
            bool m_bActive; // 0x61c            
            bool m_bUseScreenAspectRatio; // 0x61d            
            uint8_t _pad061e[0x2]; // 0x61e
            float m_flAspectRatio; // 0x620            
            bool m_bNoSky; // 0x624            
            uint8_t _pad0625[0x3]; // 0x625
            float m_fBrightness; // 0x628            
            float m_flZFar; // 0x62c            
            float m_flZNear; // 0x630            
            bool m_bCanHLTVUse; // 0x634            
            bool m_bAlignWithParent; // 0x635            
            bool m_bDofEnabled; // 0x636            
            uint8_t _pad0637[0x1]; // 0x637
            float m_flDofNearBlurry; // 0x638            
            float m_flDofNearCrisp; // 0x63c            
            float m_flDofFarCrisp; // 0x640            
            float m_flDofFarBlurry; // 0x644            
            float m_flDofTiltToGround; // 0x648            
            float m_TargetFOV; // 0x64c            
            float m_DegreesPerSecond; // 0x650            
            bool m_bIsOn; // 0x654            
            uint8_t _pad0655[0x3]; // 0x655
            // metadata: MNotSaved
            source2sdk::client::C_PointCamera* m_pNext; // 0x658            
            
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
        
        static_assert(sizeof(source2sdk::client::C_PointCamera) == 0x660);
    };
};
