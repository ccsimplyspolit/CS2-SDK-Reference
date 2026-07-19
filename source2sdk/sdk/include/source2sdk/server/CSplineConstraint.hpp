#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPhysConstraint.hpp"
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
        // Size: 0x5b8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSplineConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            uint8_t _pad0508[0x50]; // 0x508
            Vector m_vAnchorOffsetRestore; // 0x558            
            // m_hSplineEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSplineEntity;
            char m_hSplineEntity[0x4]; // 0x564            
            // metadata: MPhysPtr
            source2sdk::vphysics2::IPhysicsBody* m_pSplineBody; // 0x568            
            bool m_bEnableLateralConstraint; // 0x570            
            bool m_bEnableVerticalConstraint; // 0x571            
            bool m_bEnableAngularConstraint; // 0x572            
            bool m_bEnableLimit; // 0x573            
            bool m_bFireEventsOnPath; // 0x574            
            uint8_t _pad0575[0x3]; // 0x575
            float m_flLinearFrequency; // 0x578            
            float m_flLinarDampingRatio; // 0x57c            
            float m_flJointFriction; // 0x580            
            float m_flTransitionTime; // 0x584            
            uint8_t _pad0588[0x10]; // 0x588
            // metadata: MNotSaved
            VectorWS m_vPreSolveAnchorPos; // 0x598            
            source2sdk::entity2::GameTime_t m_StartTransitionTime; // 0x5a4            
            Vector m_vTangentSpaceAnchorAtTransitionStart; // 0x5a8            
            uint8_t _pad05b4[0x4];
            
            // Datamap fields:
            // float InputSetTransitionTime; // 0x0
            // CUtlSymbolLarge InputSetSplineEntity; // 0x0
            // void InputEnableLimit; // 0x0
            // void InputDisableLimit; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSplineConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSplineConstraint) == 0x5b8);
    };
};
