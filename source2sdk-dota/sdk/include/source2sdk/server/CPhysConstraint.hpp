#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace vphysics2
    {
        struct IPhysicsJoint;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4f8
        // Has VTable
        // Is Abstract
        // Construct disallowed
        #pragma pack(push, 1)
        class CPhysConstraint : public source2sdk::server::CLogicalEntity
        {
        public:
            // metadata: MPhysPtr
            source2sdk::vphysics2::IPhysicsJoint* m_hJoint; // 0x498            
            CUtlSymbolLarge m_nameAttach1; // 0x4a0            
            CUtlSymbolLarge m_nameAttach2; // 0x4a8            
            // m_hAttach1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttach1;
            char m_hAttach1[0x4]; // 0x4b0            
            // m_hAttach2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttach2;
            char m_hAttach2[0x4]; // 0x4b4            
            CUtlSymbolLarge m_nameAttachment1; // 0x4b8            
            CUtlSymbolLarge m_nameAttachment2; // 0x4c0            
            CGameSoundEventName m_breakSound; // 0x4c8            
            float m_forceLimit; // 0x4d0            
            float m_torqueLimit; // 0x4d4            
            float m_minTeleportDistance; // 0x4d8            
            bool m_bSnapObjectPositions; // 0x4dc            
            bool m_bTreatEntity1AsInfiniteMass; // 0x4dd            
            uint8_t _pad04de[0x2]; // 0x4de
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0x4e0            
            
            // Datamap fields:
            // void InputBreak; // 0x0
            // void InputOnBreak; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputEnableLinearConstraint; // 0x0
            // void InputDisableLinearConstraint; // 0x0
            // void InputEnableAngularConstraint; // 0x0
            // void InputDisableAngularConstraint; // 0x0
            // void InputTurnMotorOn; // 0x0
            // void InputTurnMotorOff; // 0x0
            // float InputSetMotorTorqueFactor; // 0x0
            // float InputSetMotorTargetVelocity; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysConstraint) == 0x4f8);
    };
};
