#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysConstraint.hpp"
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
        // Size: 0x530
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysWheelConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_flSuspensionFrequency; // 0x4f8            
            float m_flSuspensionDampingRatio; // 0x4fc            
            float m_flSuspensionHeightOffset; // 0x500            
            bool m_bEnableSuspensionLimit; // 0x504            
            uint8_t _pad0505[0x3]; // 0x505
            float m_flMinSuspensionOffset; // 0x508            
            float m_flMaxSuspensionOffset; // 0x50c            
            bool m_bEnableSteeringLimit; // 0x510            
            uint8_t _pad0511[0x3]; // 0x511
            float m_flMinSteeringAngle; // 0x514            
            float m_flMaxSteeringAngle; // 0x518            
            float m_flSteeringAxisFriction; // 0x51c            
            float m_flSpinAxisFriction; // 0x520            
            // m_hSteeringMimicsEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSteeringMimicsEntity;
            char m_hSteeringMimicsEntity[0x4]; // 0x524            
            uint8_t _pad0528[0x8];
            
            // Datamap fields:
            // float InputSetMinSuspensionOffset; // 0x0
            // float InputSetMaxSuspensionOffset; // 0x0
            // CUtlSymbolLarge InputSetSteeringMimicsEntity; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysWheelConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysWheelConstraint) == 0x530);
    };
};
