#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x548
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointAngleSensor : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bDisabled; // 0x4a8            
            uint8_t _pad04a9[0x7]; // 0x4a9
            CUtlSymbolLarge m_nLookAtName; // 0x4b0            
            // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEntity;
            char m_hTargetEntity[0x4]; // 0x4b8            
            // m_hLookAtEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLookAtEntity;
            char m_hLookAtEntity[0x4]; // 0x4bc            
            float m_flDuration; // 0x4c0            
            float m_flDotTolerance; // 0x4c4            
            source2sdk::entity2::GameTime_t m_flFacingTime; // 0x4c8            
            bool m_bFired; // 0x4cc            
            uint8_t _pad04cd[0x3]; // 0x4cd
            source2sdk::entity2::CEntityIOOutput m_OnFacingLookat; // 0x4d0            
            source2sdk::entity2::CEntityIOOutput m_OnNotFacingLookat; // 0x4e8            
            // m_TargetDir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<Vector> m_TargetDir;
            char m_TargetDir[0x28]; // 0x500            
            // m_FacingPercentage has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_FacingPercentage;
            char m_FacingPercentage[0x20]; // 0x528            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
            // void InputTest; // 0x0
            // CUtlSymbolLarge InputSetTargetEntity; // 0x0
            // float tolerance; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointAngleSensor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointAngleSensor) == 0x548);
    };
};
