#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CServerOnlyPointEntity.hpp"
#include "source2sdk/server/EBotTestNodeType.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelPlayerPawn;
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
        // Size: 0x4d8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelBotTestNode : public source2sdk::server::CServerOnlyPointEntity
        {
        public:
            source2sdk::server::EBotTestNodeType m_eNodeType; // 0x4a0            
            uint8_t _pad04a4[0x4]; // 0x4a4
            CUtlSymbolLarge m_sNextNode; // 0x4a8            
            CUtlSymbolLarge m_sShootTarget; // 0x4b0            
            // metadata: MNotSaved
            // m_hNextNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBotTestNode> m_hNextNode;
            char m_hNextNode[0x4]; // 0x4b8            
            // metadata: MNotSaved
            // m_hShootTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBotTestNode> m_hShootTarget;
            char m_hShootTarget[0x4]; // 0x4bc            
            // metadata: MNotSaved
            // m_hLockingEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelPlayerPawn> m_hLockingEntity;
            char m_hLockingEntity[0x4]; // 0x4c0            
            uint8_t _pad04c4[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelBotTestNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelBotTestNode) == 0x4d8);
    };
};
