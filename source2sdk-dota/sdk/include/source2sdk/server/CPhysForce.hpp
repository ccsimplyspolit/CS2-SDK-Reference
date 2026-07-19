#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CConstantForceController.hpp"
#include "source2sdk/server/CPointEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct IPhysicsMotionController;
    };
};
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4f8
        // Has VTable
        // Is Abstract
        // Construct disallowed
        #pragma pack(push, 1)
        class CPhysForce : public source2sdk::server::CPointEntity
        {
        public:
            // metadata: MPhysPtr
            source2sdk::client::IPhysicsMotionController* m_pController; // 0x498            
            CUtlSymbolLarge m_nameAttach; // 0x4a0            
            float m_force; // 0x4a8            
            float m_forceTime; // 0x4ac            
            // m_attachedObject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_attachedObject;
            char m_attachedObject[0x4]; // 0x4b0            
            // metadata: MNotSaved
            bool m_wasRestored; // 0x4b4            
            uint8_t _pad04b5[0x3]; // 0x4b5
            source2sdk::server::CConstantForceController m_integrator; // 0x4b8            
            
            // Datamap fields:
            // void InputActivate; // 0x0
            // void InputDeactivate; // 0x0
            // float InputForceScale; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysForce) == 0x4f8);
    };
};
