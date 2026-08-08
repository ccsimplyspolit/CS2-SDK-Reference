#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EEvent.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Building.hpp"

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
        // Size: 0x19d0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Effigy_Statue : public source2sdk::server::CDOTA_BaseNPC_Building
        {
        public:
            // m_hEffigyParticleDef has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hEffigyParticleDef;
            char m_hEffigyParticleDef[0x8]; // 0x19c0
            source2sdk::client::EEvent m_eEffigyEvent; // 0x19c8
            std::int32_t m_nEffigyLevel; // 0x19cc

            // Datamap fields:
            // CHandle< CBaseEntity > base_building; // 0x7fffffff
            // CUtlSymbolLarge particle_effigy_effect; // 0x7fffffff
            // int32_t eventID; // 0x7fffffff
            // int32_t effigy_level; // 0x7fffffff
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_BaseNPC_Effigy_Statue because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Effigy_Statue) == 0x19d0);
    };
};
