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
        // Size: 0x568
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointAngularVelocitySensor : public source2sdk::server::CPointEntity
        {
        public:
            // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEntity;
            char m_hTargetEntity[0x4]; // 0x498            
            float m_flThreshold; // 0x49c            
            std::int32_t m_nLastCompareResult; // 0x4a0            
            std::int32_t m_nLastFireResult; // 0x4a4            
            source2sdk::entity2::GameTime_t m_flFireTime; // 0x4a8            
            float m_flFireInterval; // 0x4ac            
            float m_flLastAngVelocity; // 0x4b0            
            QAngle m_lastOrientation; // 0x4b4            
            VectorWS m_vecAxis; // 0x4c0            
            bool m_bUseHelper; // 0x4cc            
            uint8_t _pad04cd[0x3]; // 0x4cd
            // m_AngularVelocity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_AngularVelocity;
            char m_AngularVelocity[0x20]; // 0x4d0            
            source2sdk::entity2::CEntityIOOutput m_OnLessThan; // 0x4f0            
            source2sdk::entity2::CEntityIOOutput m_OnLessThanOrEqualTo; // 0x508            
            source2sdk::entity2::CEntityIOOutput m_OnGreaterThan; // 0x520            
            source2sdk::entity2::CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x538            
            source2sdk::entity2::CEntityIOOutput m_OnEqualTo; // 0x550            
            
            // Datamap fields:
            // void InputTest; // 0x0
            // void InputTestWithInterval; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointAngularVelocitySensor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointAngularVelocitySensor) == 0x568);
    };
};
