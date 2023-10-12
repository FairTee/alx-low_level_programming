{"payload":{"allShortcutsEnabled":false,"fileTree":{"0x17 C - Doubly linked lists":{"items":[{"name":"100-password","path":"0x17 C - Doubly linked lists/100-password","contentType":"file"},{"name":"102-result","path":"0x17 C - Doubly linked lists/102-result","contentType":"file"},{"name":"103-keygen.c","path":"0x17 C - Doubly linked lists/103-keygen.c","contentType":"file"}],"totalCount":3},"":{"items":[{"name":"0x07-python-test_driven_development","path":"0x07-python-test_driven_development","contentType":"directory"},{"name":"0x0A-python-inheritance","path":"0x0A-python-inheritance","contentType":"directory"},{"name":"0x0C-python-almost_a_circle","path":"0x0C-python-almost_a_circle","contentType":"directory"},{"name":"0x17 C - Doubly linked lists","path":"0x17 C - Doubly linked lists","contentType":"directory"},{"name":"0x18 C - Dynamic libraries","path":"0x18 C - Dynamic libraries","contentType":"directory"},{"name":"100-realloc.c","path":"100-realloc.c","contentType":"file"},{"name":"101-mul.c","path":"101-mul.c","contentType":"file"},{"name":"101-password","path":"101-password","contentType":"file"},{"name":"2-calloc.c","path":"2-calloc.c","contentType":"file"},{"name":"3-array_range.c","path":"3-array_range.c","contentType":"file"},{"name":"_putchar.c","path":"_putchar.c","contentType":"file"},{"name":"main.h","path":"main.h","contentType":"file"}],"totalCount":12}},"fileTreeProcessingTime":3.712092,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":627534744,"defaultBranch":"main","name":"alx","ownerLogin":"sadatmisr","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2023-04-13T17:04:55.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/130691074?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"main","listCacheKey":"v0:1695082556.0","canEdit":false,"refType":"branch","currentOid":"907071687d98b6e848fd75176358115c4081617f"},"path":"0x17 C - Doubly linked lists/103-keygen.c","currentUser":null,"blob":{"rawLines":["#include <stdio.h>","#include <stdlib.h>","#include <string.h>","","/**"," * main - Generates and prints passwords for the crackme5 executable."," * @argc: The number of arguments supplied to the program."," * @argv: An array of pointers to the arguments."," *"," * Return: Always 0."," */","int main(int __attribute__((__unused__)) argc, char *argv[])","{","\tchar password[7], *codex;","\tint len = strlen(argv[1]), i, tmp;","","\tcodex = \"A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk\";","","\ttmp = (len ^ 59) & 63;","\tpassword[0] = codex[tmp];","","\ttmp = 0;","\tfor (i = 0; i < len; i++)","\t\ttmp += argv[1][i];","\tpassword[1] = codex[(tmp ^ 79) & 63];","","\ttmp = 1;","\tfor (i = 0; i < len; i++)","\t\ttmp *= argv[1][i];","\tpassword[2] = codex[(tmp ^ 85) & 63];","","\ttmp = 0;","\tfor (i = 0; i < len; i++)","\t{","\t\tif (argv[1][i] > tmp)","\t\t\ttmp = argv[1][i];","\t}","\tsrand(tmp ^ 14);","\tpassword[3] = codex[rand() & 63];","","\ttmp = 0;","\tfor (i = 0; i < len; i++)","\t\ttmp += (argv[1][i] * argv[1][i]);","\tpassword[4] = codex[(tmp ^ 239) & 63];","","\tfor (i = 0; i < argv[1][0]; i++)","\t\ttmp = rand();","\tpassword[5] = codex[(tmp ^ 229) & 63];","","\tpassword[6] = '\\0';","\tprintf(\"%s\", password);","\treturn (0);","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":18,"cssClass":"pl-s"}],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"}],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":69,"cssClass":"pl-c"}],[{"start":0,"end":58,"cssClass":"pl-c"}],[{"start":0,"end":48,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":20,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":8,"cssClass":"pl-en"},{"start":9,"end":12,"cssClass":"pl-smi"},{"start":28,"end":38,"cssClass":"pl-s1"},{"start":41,"end":45,"cssClass":"pl-s1"},{"start":47,"end":51,"cssClass":"pl-smi"},{"start":52,"end":53,"cssClass":"pl-c1"},{"start":53,"end":57,"cssClass":"pl-s1"}],[],[{"start":1,"end":5,"cssClass":"pl-smi"},{"start":6,"end":14,"cssClass":"pl-s1"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":19,"end":20,"cssClass":"pl-c1"},{"start":20,"end":25,"cssClass":"pl-s1"}],[{"start":1,"end":4,"cssClass":"pl-smi"},{"start":5,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":11,"end":17,"cssClass":"pl-en"},{"start":18,"end":22,"cssClass":"pl-s1"},{"start":23,"end":24,"cssClass":"pl-c1"},{"start":28,"end":29,"cssClass":"pl-s1"},{"start":31,"end":34,"cssClass":"pl-s1"}],[],[{"start":1,"end":6,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":9,"end":75,"cssClass":"pl-s"}],[],[{"start":1,"end":4,"cssClass":"pl-s1"},{"start":5,"end":6,"cssClass":"pl-c1"},{"start":8,"end":11,"cssClass":"pl-s1"},{"start":14,"end":16,"cssClass":"pl-c1"},{"start":18,"end":19,"cssClass":"pl-c1"},{"start":20,"end":22,"cssClass":"pl-c1"}],[{"start":1,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":15,"end":20,"cssClass":"pl-s1"},{"start":21,"end":24,"cssClass":"pl-s1"}],[],[{"start":1,"end":4,"cssClass":"pl-s1"},{"start":5,"end":6,"cssClass":"pl-c1"},{"start":7,"end":8,"cssClass":"pl-c1"}],[{"start":1,"end":4,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-s1"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":17,"end":20,"cssClass":"pl-s1"},{"start":22,"end":23,"cssClass":"pl-s1"},{"start":23,"end":25,"cssClass":"pl-c1"}],[{"start":2,"end":5,"cssClass":"pl-s1"},{"start":6,"end":8,"cssClass":"pl-c1"},{"start":9,"end":13,"cssClass":"pl-s1"},{"start":14,"end":15,"cssClass":"pl-c1"},{"start":17,"end":18,"cssClass":"pl-s1"}],[{"start":1,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":15,"end":20,"cssClass":"pl-s1"},{"start":22,"end":25,"cssClass":"pl-s1"},{"start":28,"end":30,"cssClass":"pl-c1"},{"start":32,"end":33,"cssClass":"pl-c1"},{"start":34,"end":36,"cssClass":"pl-c1"}],[],[{"start":1,"end":4,"cssClass":"pl-s1"},{"start":5,"end":6,"cssClass":"pl-c1"},{"start":7,"end":8,"cssClass":"pl-c1"}],[{"start":1,"end":4,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-s1"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":17,"end":20,"cssClass":"pl-s1"},{"start":22,"end":23,"cssClass":"pl-s1"},{"start":23,"end":25,"cssClass":"pl-c1"}],[{"start":2,"end":5,"cssClass":"pl-s1"},{"start":9,"end":13,"cssClass":"pl-s1"},{"start":14,"end":15,"cssClass":"pl-c1"},{"start":17,"end":18,"cssClass":"pl-s1"}],[{"start":1,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":15,"end":20,"cssClass":"pl-s1"},{"start":22,"end":25,"cssClass":"pl-s1"},{"start":28,"end":30,"cssClass":"pl-c1"},{"start":32,"end":33,"cssClass":"pl-c1"},{"start":34,"end":36,"cssClass":"pl-c1"}],[],[{"start":1,"end":4,"cssClass":"pl-s1"},{"start":5,"end":6,"cssClass":"pl-c1"},{"start":7,"end":8,"cssClass":"pl-c1"}],[{"start":1,"end":4,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-s1"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":17,"end":20,"cssClass":"pl-s1"},{"start":22,"end":23,"cssClass":"pl-s1"},{"start":23,"end":25,"cssClass":"pl-c1"}],[],[{"start":2,"end":4,"cssClass":"pl-k"},{"start":6,"end":10,"cssClass":"pl-s1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":14,"end":15,"cssClass":"pl-s1"},{"start":17,"end":18,"cssClass":"pl-c1"},{"start":19,"end":22,"cssClass":"pl-s1"}],[{"start":3,"end":6,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":9,"end":13,"cssClass":"pl-s1"},{"start":14,"end":15,"cssClass":"pl-c1"},{"start":17,"end":18,"cssClass":"pl-s1"}],[],[{"start":1,"end":6,"cssClass":"pl-en"},{"start":7,"end":10,"cssClass":"pl-s1"},{"start":13,"end":15,"cssClass":"pl-c1"}],[{"start":1,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":15,"end":20,"cssClass":"pl-s1"},{"start":21,"end":25,"cssClass":"pl-en"},{"start":28,"end":29,"cssClass":"pl-c1"},{"start":30,"end":32,"cssClass":"pl-c1"}],[],[{"start":1,"end":4,"cssClass":"pl-s1"},{"start":5,"end":6,"cssClass":"pl-c1"},{"start":7,"end":8,"cssClass":"pl-c1"}],[{"start":1,"end":4,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-s1"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":17,"end":20,"cssClass":"pl-s1"},{"start":22,"end":23,"cssClass":"pl-s1"},{"start":23,"end":25,"cssClass":"pl-c1"}],[{"start":2,"end":5,"cssClass":"pl-s1"},{"start":6,"end":8,"cssClass":"pl-c1"},{"start":10,"end":14,"cssClass":"pl-s1"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":18,"end":19,"cssClass":"pl-s1"},{"start":21,"end":22,"cssClass":"pl-c1"},{"start":23,"end":27,"cssClass":"pl-s1"},{"start":28,"end":29,"cssClass":"pl-c1"},{"start":31,"end":32,"cssClass":"pl-s1"}],[{"start":1,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":15,"end":20,"cssClass":"pl-s1"},{"start":22,"end":25,"cssClass":"pl-s1"},{"start":28,"end":31,"cssClass":"pl-c1"},{"start":33,"end":34,"cssClass":"pl-c1"},{"start":35,"end":37,"cssClass":"pl-c1"}],[],[{"start":1,"end":4,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-s1"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":17,"end":21,"cssClass":"pl-s1"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":25,"end":26,"cssClass":"pl-c1"},{"start":29,"end":30,"cssClass":"pl-s1"},{"start":30,"end":32,"cssClass":"pl-c1"}],[{"start":2,"end":5,"cssClass":"pl-s1"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":8,"end":12,"cssClass":"pl-en"}],[{"start":1,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":15,"end":20,"cssClass":"pl-s1"},{"start":22,"end":25,"cssClass":"pl-s1"},{"start":28,"end":31,"cssClass":"pl-c1"},{"start":33,"end":34,"cssClass":"pl-c1"},{"start":35,"end":37,"cssClass":"pl-c1"}],[],[{"start":1,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":15,"end":19,"cssClass":"pl-c1"}],[{"start":1,"end":7,"cssClass":"pl-en"},{"start":8,"end":12,"cssClass":"pl-s"},{"start":14,"end":22,"cssClass":"pl-s1"}],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":9,"end":10,"cssClass":"pl-c1"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/sadatmisr/alx/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/sadatmisr/alx/security/dependabot","repoSecurityAndAnalysisPath":"/sadatmisr/alx/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"103-keygen.c","displayUrl":"https://github.com/sadatmisr/alx/blob/main/0x17%20C%20-%20Doubly%20linked%20lists/103-keygen.c?raw=true","headerInfo":{"blobSize":"1.1 KB","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"9e0f9ac","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Fsadatmisr%2Falx%2Fblob%2Fmain%2F0x17%2520C%2520-%2520Doubly%2520linked%2520lists%2F103-keygen.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"53","truncatedSloc":"44"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/sadatmisr/alx/discussions/new","newIssuePath":"/sadatmisr/alx/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/sadatmisr/alx/blob/main/0x17%20C%20-%20Doubly%20linked%20lists/103-keygen.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/sadatmisr/alx/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"rawBlobUrl":"https://github.com/sadatmisr/alx/raw/main/0x17%20C%20-%20Doubly%20linked%20lists/103-keygen.c","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"sadatmisr","repoName":"alx","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"main","kind":"function","identStart":274,"identEnd":278,"extentStart":274,"extentEnd":330,"fullyQualifiedName":"main","identUtf16":{"start":{"lineNumber":11,"utf16Col":4},"end":{"lineNumber":11,"utf16Col":8}},"extentUtf16":{"start":{"lineNumber":11,"utf16Col":4},"end":{"lineNumber":11,"utf16Col":60}}}]}},"copilotInfo":null,"csrf_tokens":{"/sadatmisr/alx/branches":{"post":"NQEf9l_fvWWh-G_Aj6TryUD0agUWx9bePISgCz5kSBbcD0S67u-aC6y_HxPxnX1IdwFV0aVVXbUTmY9wcAi7mg"},"/repos/preferences":{"post":"2uNq5PilJyI73xghI-egRJ8OAcR_65DcxfiFc58QlivlnFTGy2w-HGt69KnsFdmBnQ_eEH4YgykUVdcaf0eLmg"}}},"title":"alx/0x17 C - Doubly linked lists/103-keygen.c at main · sadatmisr/alx"}