#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CKeepUpright : public source2sdk::server::CPointEntity
        {
        public:
            uint8_t _pad04a8[0x8]; // 0x4a8
            Vector m_worldGoalAxis; // 0x4b0            
            Vector m_localTestAxis; // 0x4bc            
            // metadata: MPhysPtr
            source2sdk::client::IPhysicsMotionController* m_pController; // 0x4c8            
            CUtlSymbolLarge m_nameAttach; // 0x4d0            
            // m_attachedObject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_attachedObject;
            char m_attachedObject[0x4]; // 0x4d8            
            float m_angularLimit; // 0x4dc            
            bool m_bActive; // 0x4e0            
            bool m_bDampAllRotation; // 0x4e1            
            uint8_t _pad04e2[0x6];
            
            // Datamap fields:
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // float InputSetAngularLimit; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CKeepUpright because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CKeepUpright) == 0x4e8);
    };
};
