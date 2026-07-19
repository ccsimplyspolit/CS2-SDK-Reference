#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
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
        struct CAI_BaseNPC;
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
        // Size: 0x4d0
        // Has VTable
        #pragma pack(push, 1)
        class CPhysicsNPCSolver : public source2sdk::server::CLogicalEntity
        {
        public:
            uint8_t _pad04a0[0x8]; // 0x4a0
            // metadata: MNotSaved
            source2sdk::server::CPhysicsNPCSolver* m_pNext; // 0x4a8            
            // m_hNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CAI_BaseNPC> m_hNPC;
            char m_hNPC[0x4]; // 0x4b0            
            // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntity;
            char m_hEntity[0x4]; // 0x4b4            
            // metadata: MPhysPtr
            source2sdk::client::IPhysicsMotionController* m_pController; // 0x4b8            
            float m_separationDuration; // 0x4c0            
            source2sdk::entity2::GameTime_t m_cancelTime; // 0x4c4            
            bool m_allowIntersection; // 0x4c8            
            uint8_t _pad04c9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsNPCSolver because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsNPCSolver) == 0x4d0);
    };
};
