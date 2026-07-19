#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 7
        // Alignment: 4
        // Size: 0x4
        enum class NPC_Vault_State_t : std::uint32_t
        {
            kNPC_Vault_State_Idle = 0x0,
            kNPC_Vault_State_Active = 0x1,
            kNPC_Vault_State_Critical = 0x2,
            kNPC_Vault_State_DestroySuccessLight = 0x3,
            kNPC_Vault_State_DestroySuccessHeavy = 0x4,
            kNPC_Vault_State_DestroyFailure = 0x5,
            kNPC_Vault_State_DestroyDead = 0x6,
        };
    };
};
