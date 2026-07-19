#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
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
        // Size: 0x910
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerNeutralShield : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNotSaved
            // m_vecPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecPlayers;
            char m_vecPlayers[0x18]; // 0x8e0            
            // metadata: MNotSaved
            // m_vecNeutrals has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecNeutrals;
            char m_vecNeutrals[0x18]; // 0x8f8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerNeutralShield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerNeutralShield) == 0x910);
    };
};
