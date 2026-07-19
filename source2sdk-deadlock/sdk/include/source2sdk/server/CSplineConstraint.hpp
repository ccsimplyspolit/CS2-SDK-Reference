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
        // Size: 0x5b0
        // Has VTable
        #pragma pack(push, 1)
        class CSplineConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            uint8_t _pad0500[0x50]; // 0x500
            Vector m_vAnchorOffsetRestore; // 0x550            
            // m_hSplineEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSplineEntity;
            char m_hSplineEntity[0x4]; // 0x55c            
            // metadata: MPhysPtr
            source2sdk::vphysics2::IPhysicsBody* m_pSplineBody; // 0x560            
            bool m_bEnableLateralConstraint; // 0x568            
            bool m_bEnableVerticalConstraint; // 0x569            
            bool m_bEnableAngularConstraint; // 0x56a            
            bool m_bEnableLimit; // 0x56b            
            bool m_bFireEventsOnPath; // 0x56c            
            uint8_t _pad056d[0x3]; // 0x56d
            float m_flLinearFrequency; // 0x570            
            float m_flLinarDampingRatio; // 0x574            
            float m_flJointFriction; // 0x578            
            float m_flTransitionTime; // 0x57c            
            uint8_t _pad0580[0x10]; // 0x580
            // metadata: MNotSaved
            VectorWS m_vPreSolveAnchorPos; // 0x590            
            source2sdk::entity2::GameTime_t m_StartTransitionTime; // 0x59c            
            Vector m_vTangentSpaceAnchorAtTransitionStart; // 0x5a0            
            uint8_t _pad05ac[0x4];
            
            // Datamap fields:
            // void CSplineConstraintTransitionThink; // 0x0
            // float InputSetTransitionTime; // 0x0
            // CUtlSymbolLarge InputSetSplineEntity; // 0x0
            // void InputEnableLimit; // 0x0
            // void InputDisableLimit; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSplineConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSplineConstraint) == 0x5b0);
    };
};
