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
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "float m_FOV"
        // static metadata: MNetworkVarNames "float m_Resolution"
        // static metadata: MNetworkVarNames "bool m_bFogEnable"
        // static metadata: MNetworkVarNames "Color m_FogColor"
        // static metadata: MNetworkVarNames "float m_flFogStart"
        // static metadata: MNetworkVarNames "float m_flFogEnd"
        // static metadata: MNetworkVarNames "float m_flFogMaxDensity"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "bool m_bUseScreenAspectRatio"
        // static metadata: MNetworkVarNames "float m_flAspectRatio"
        // static metadata: MNetworkVarNames "bool m_bNoSky"
        // static metadata: MNetworkVarNames "float m_fBrightness"
        // static metadata: MNetworkVarNames "float m_flZFar"
        // static metadata: MNetworkVarNames "float m_flZNear"
        // static metadata: MNetworkVarNames "bool m_bCanHLTVUse"
        // static metadata: MNetworkVarNames "bool m_bAlignWithParent"
        // static metadata: MNetworkVarNames "bool m_bDofEnabled"
        // static metadata: MNetworkVarNames "float m_flDofNearBlurry"
        // static metadata: MNetworkVarNames "float m_flDofNearCrisp"
        // static metadata: MNetworkVarNames "float m_flDofFarCrisp"
        // static metadata: MNetworkVarNames "float m_flDofFarBlurry"
        // static metadata: MNetworkVarNames "float m_flDofTiltToGround"
        #pragma pack(push, 1)
        class CPointCamera : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_FOV; // 0x4a0            
            // metadata: MNetworkEnable
            float m_Resolution; // 0x4a4            
            // metadata: MNetworkEnable
            bool m_bFogEnable; // 0x4a8            
            // metadata: MNetworkEnable
            Color m_FogColor; // 0x4a9            
            uint8_t _pad04ad[0x3]; // 0x4ad
            // metadata: MNetworkEnable
            float m_flFogStart; // 0x4b0            
            // metadata: MNetworkEnable
            float m_flFogEnd; // 0x4b4            
            // metadata: MNetworkEnable
            float m_flFogMaxDensity; // 0x4b8            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x4bc            
            // metadata: MNetworkEnable
            bool m_bUseScreenAspectRatio; // 0x4bd            
            uint8_t _pad04be[0x2]; // 0x4be
            // metadata: MNetworkEnable
            float m_flAspectRatio; // 0x4c0            
            // metadata: MNetworkEnable
            bool m_bNoSky; // 0x4c4            
            uint8_t _pad04c5[0x3]; // 0x4c5
            // metadata: MNetworkEnable
            float m_fBrightness; // 0x4c8            
            // metadata: MNetworkEnable
            float m_flZFar; // 0x4cc            
            // metadata: MNetworkEnable
            float m_flZNear; // 0x4d0            
            // metadata: MNetworkEnable
            bool m_bCanHLTVUse; // 0x4d4            
            // metadata: MNetworkEnable
            bool m_bAlignWithParent; // 0x4d5            
            // metadata: MNetworkEnable
            bool m_bDofEnabled; // 0x4d6            
            uint8_t _pad04d7[0x1]; // 0x4d7
            // metadata: MNetworkEnable
            float m_flDofNearBlurry; // 0x4d8            
            // metadata: MNetworkEnable
            float m_flDofNearCrisp; // 0x4dc            
            // metadata: MNetworkEnable
            float m_flDofFarCrisp; // 0x4e0            
            // metadata: MNetworkEnable
            float m_flDofFarBlurry; // 0x4e4            
            // metadata: MNetworkEnable
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
