#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/server/CMotorController.hpp"
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
        struct IPhysicsBody;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x500
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysMotor : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_nameAttach; // 0x498            
            CUtlSymbolLarge m_nameAnchor; // 0x4a0            
            // m_hAttachedObject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttachedObject;
            char m_hAttachedObject[0x4]; // 0x4a8            
            // m_hAnchorObject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnchorObject;
            char m_hAnchorObject[0x4]; // 0x4ac            
            float m_spinUp; // 0x4b0            
            float m_spinDown; // 0x4b4            
            float m_flMotorFriction; // 0x4b8            
            float m_additionalAcceleration; // 0x4bc            
            float m_angularAcceleration; // 0x4c0            
            float m_flTorqueScale; // 0x4c4            
            float m_flTargetSpeed; // 0x4c8            
            float m_flSpeedWhenSpinUpOrSpinDownStarted; // 0x4cc            
            // metadata: MPhysPtr
            source2sdk::vphysics2::IPhysicsBody* m_pFixedWorldBody; // 0x4d0            
            // metadata: MPhysPtr
            source2sdk::vphysics2::IPhysicsJoint* m_pMotorJoint; // 0x4d8            
            source2sdk::server::CMotorController m_motor; // 0x4e0            
            
            // Datamap fields:
            // float InputSetTargetSpeed; // 0x0
            // float InputSetFriction; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysMotor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysMotor) == 0x500);
    };
};
