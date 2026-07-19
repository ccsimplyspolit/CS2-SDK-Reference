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
        // Size: 0x538
        // Has VTable
        #pragma pack(push, 1)
        class CPhysWheelConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_flSuspensionFrequency; // 0x500            
            float m_flSuspensionDampingRatio; // 0x504            
            float m_flSuspensionHeightOffset; // 0x508            
            bool m_bEnableSuspensionLimit; // 0x50c            
            uint8_t _pad050d[0x3]; // 0x50d
            float m_flMinSuspensionOffset; // 0x510            
            float m_flMaxSuspensionOffset; // 0x514            
            bool m_bEnableSteeringLimit; // 0x518            
            uint8_t _pad0519[0x3]; // 0x519
            float m_flMinSteeringAngle; // 0x51c            
            float m_flMaxSteeringAngle; // 0x520            
            float m_flSteeringAxisFriction; // 0x524            
            float m_flSpinAxisFriction; // 0x528            
            // m_hSteeringMimicsEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSteeringMimicsEntity;
            char m_hSteeringMimicsEntity[0x4]; // 0x52c            
            uint8_t _pad0530[0x8];
            
            // Datamap fields:
            // float InputSetMinSuspensionOffset; // 0x0
            // float InputSetMaxSuspensionOffset; // 0x0
            // CUtlSymbolLarge InputSetSteeringMimicsEntity; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysWheelConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysWheelConstraint) == 0x538);
    };
};
