#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointVelocitySensor : public source2sdk::server::CPointEntity
        {
        public:
            // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEntity;
            char m_hTargetEntity[0x4]; // 0x4a8            
            Vector m_vecAxis; // 0x4ac            
            bool m_bEnabled; // 0x4b8            
            uint8_t _pad04b9[0x3]; // 0x4b9
            float m_fPrevVelocity; // 0x4bc            
            float m_flAvgInterval; // 0x4c0            
            uint8_t _pad04c4[0x4]; // 0x4c4
            // m_Velocity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_Velocity;
            char m_Velocity[0x20]; // 0x4c8            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointVelocitySensor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointVelocitySensor) == 0x4e8);
    };
};
